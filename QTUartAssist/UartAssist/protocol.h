#ifndef PROTOCOL_H
#define PROTOCOL_H
#include<QString>

//表端宏定义
#define BufSize 128
#define UART_START 0x01


#define UART_CMD_SETMTNO  0x51
#define UART_CMD_READMTNO 0x52


//集中器宏定义

//188协议结构体
typedef struct
{
    uchar FrameHead;
    uchar Type;   //
    uchar Addr[7];
    uchar CtlCode;
    uchar DataLen;
    uchar DI[2];
    uchar ser;
    uchar Dat[192];
}struct_protocol_188;

//宏

#define GPRS_UPLOAD_NUM  37 //GPRS主动上发字节数
#define PrameDataNUM  20   //批处理命令分包大小


#define SoftVer     0x0001  //软件版本号
#define JZQ_IDN     0xa0    //集中器类型

#define ACK					0x80	//正确响应
#define NAK					0xc0	//错误响应

#define  Frame_LEN   10  //数据长度所在位置

#define  USART_STX   0x68           //帧头
#define  USART_END   0x16           //帧尾


#define  USART_MIN_FRAME			13		//一帧数据最小13字节
#define  USART_MAX_FRAME			256		//一帧数据最大256字节




#define RD_DAT  0x01  //读数据
//读数据标识
#define RD_NETPARAM		     0x8201			//读集中器网络参数
#define RD_TIME				 0x8202			//读集中器时间
#define RD_RFPARAM		     0x8601			//读集中器RF参数   (g)
#define RD_TESTSPIFLASH		 0xaaaa			//测试命令，读集中器SPIFLASH指定地址，指定长度的数据 (g)
#define RD_NOW_ROADNUM       0x8602         //读取当前路由编号     (g)
#define EXPROT_REG_Meter     0x8603         //批量导出集中器内已经注册了的表   (g)
#define HERAT_BEAT           0x8604         //心跳 。。。。。。 (g)。。。。。。。。。。。。。。。。。。。。。。。。。。。。
#define RD_VER				 0x8605			//读软件版本号   (g)

#define WR_DAT  0x04 //写数据
//写数据标识
#define WR_NETPARAM		     0x8206			//写集中器网络参数  (g)
#define WR_TIME				 0x8207			//写集中器时间  (g)
#define WR_RFPARAM		     0x8606			//写集中器RF参数
#define WR_RFENTERCFG        0x8607     //集中器lora进入配置透传模式，此可通过串口或者GPRS对表具参数进行设置
#define WR_RFEXITCFG         0x8608     //lora退出配置透传模式
#define WR_JZQ_INIT          0x8609     //集中器初始化  将会清空所有表的注册信息。格式化flash

#define METER_DAT 0x06  //表具相关操作数据
#define METER_REG              0x860A          //表具申请注册
#define METER_REFOK            0x860B          //表具注册成功 ,新设备可连续发该指令进行批量导入注册信息
#define METER_DelRegMeter      0x8620          //删除已注册的表

#define JZQUPLOADDATA          0x860C          //集中器主动上报，表端数据
#define METERDAT_SYNC          0x860D          //数据同步
#define RD_ONEMETER_DATA       0x860E          //读取某一只表的数据
#define RD_ALLMETER_DATA       0x8616          //批量读取集中器中所有表的数据
#define RD_ONEMETER_CMDDATA    0x8615          //读取某一只表中的待下发的命令
#define BTOB_METER_Read        0x860F          //点对点抄表
#define BTOB_DATA_SYNC         0x8610          //点对点数据同步
#define BTOB_READ_HISDATA      0x8611          //点对点读取表端月冻结数据
#define BTOB_READ_DAYHISDATA   0x8612          //点对点读取表端日冻结数据
#define METER_OPENACCOUNT      0x8613          //开户
#define METER_CLEARDATA        0x8614          //清零

//读地址
#define RD_ADR				0x03
#define RD_ADR_ID			0x810A			//单机读地址
//写地址
#define WR_ADR				0x15
#define WR_ADR_ID			0xA018			//单机写地址






class protocol
{
public:
    protocol();
    static  uchar SendBuf[BufSize];
    static  uchar RecvBuf[BufSize];
    static  uchar JZQNO[7]; //集中器地址
    static  uchar MeterNo[4];//表地址
    static  uchar SaveAddrforMeter[2];//存储地址


    //表
    static int doSUMCRC(uchar *data , int len);
    static int ReadMTNO(void);
    static char doRecvData(QString data,int len);

    //终端
    static int readjzqNo();
    static int writejzqNo(void);
    static int BtoBReadMT();
};



#endif // PROTOCOL_H
