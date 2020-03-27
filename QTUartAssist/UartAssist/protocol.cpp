#include "protocol.h"
#include "string.h"
#include "lorameter.h"
#include "uartassist.h"

protocol::protocol()
{
}

 uchar protocol::RecvBuf[BufSize]={0};
 uchar protocol::SendBuf[BufSize]={0};
 uchar protocol::JZQNO[7]={0};
 uchar protocol::SaveAddrforMeter[2]={0};
 uchar protocol::MeterNo[4]={0};

int protocol::doSUMCRC(uchar *data, int len)
{
    uchar sum=0;

    for(int i=0;i<len;i++)
    {
       sum+= *data++;
    }
    return sum;
}

int protocol::ReadMTNO()
{

    int txLEN;
    SendBuf[0] = UART_START;
    SendBuf[1] = 0xFF;
    SendBuf[2] = 0xFF;
    SendBuf[3] = 0xFF;
    SendBuf[4] = 0xFF;
    SendBuf[5] = UART_CMD_READMTNO;
    SendBuf[6] = doSUMCRC(SendBuf,6);
    txLEN = 7;
    return txLEN;

}

char protocol::doRecvData(QString data, int len)
{
   // LoRaMeter::showRecMg(data);

}

int protocol::readjzqNo()
{
    int txLen;
    memset(SendBuf,0,BufSize);
    struct_protocol_188 *tx;
    tx = (struct_protocol_188*)SendBuf;
    uchar*dt = tx->Dat;
    tx->FrameHead = USART_STX;
    tx->Type = 0xAA;      //读地址为0Xaa
    memset(tx->Addr,0xAA,7);
    tx->CtlCode = RD_ADR;
    tx->DI[0] =RD_ADR_ID>>8;
    tx->DI[1] =(uchar)RD_ADR_ID;
    tx->ser = 0x00;
    uchar len = dt - tx->Dat;
    tx->DataLen = 0x03+len;
    uchar crclen = tx->DataLen + 11;
    tx->Dat[tx->DataLen - 3] = doSUMCRC((uchar*)tx,crclen); //计算校验
    tx->Dat[tx->DataLen - 2] = USART_END;

    txLen = tx->DataLen + 13; //数据帧长度
    return txLen;

}

int protocol::writejzqNo(void)
{
   //从UI中得到地址
    int txLen;
    memset(SendBuf,0,BufSize);
    struct_protocol_188 *tx;
    tx = (struct_protocol_188*)SendBuf;
    uchar*dt = tx->Dat;
    tx->FrameHead = USART_STX;
    tx->Type = JZQ_IDN;      //
    memset(tx->Addr,0xaa,7);
    tx->CtlCode = WR_ADR;
    tx->DI[0] =WR_ADR_ID>>8;
    tx->DI[1] =(uchar)WR_ADR_ID;
    tx->ser = 0x00;
    memcpy(dt,JZQNO,7); //
    dt+=7;
    uchar len = dt - tx->Dat;
    tx->DataLen = 0x03+len;
    uchar crclen = tx->DataLen + 11;
    tx->Dat[tx->DataLen - 3] = doSUMCRC((uchar*)tx,crclen); //计算校验
    tx->Dat[tx->DataLen - 2] = USART_END;

    txLen = tx->DataLen + 13; //数据帧长度
    return txLen;


}
int protocol::BtoBReadMT(void)
{

    int txLen;
    memset(SendBuf,0,BufSize);
    struct_protocol_188 *tx;
    tx = (struct_protocol_188*)SendBuf;
    uchar*dt = tx->Dat;
    tx->FrameHead = USART_STX;
    tx->Type = JZQ_IDN;
    //
    memcpy(tx->Addr,JZQNO,7);

    tx->CtlCode = METER_DAT;
    tx->DI[0] =BTOB_METER_Read>>8;
    tx->DI[1] =(uchar)BTOB_METER_Read;
    tx->ser = 0x00;
    memcpy(dt,MeterNo,4); //
    dt+=4;
    uchar len = dt - tx->Dat;
    tx->DataLen = 0x03+len;
    uchar crclen = tx->DataLen + 11;
    tx->Dat[tx->DataLen - 3] = doSUMCRC((uchar*)tx,crclen); //计算校验
    tx->Dat[tx->DataLen - 2] = USART_END;
    txLen = tx->DataLen + 13; //数据帧长度
    return txLen;

}












