#include "mytcpserver.h"


#include <QHostAddress>



QList<int> myTcpServer::ClientSocketID;
QList<myClientSocket *> myTcpServer::ClientSocketList;

myTcpServer::myTcpServer(QObject *parent) :
    QTcpServer(parent)
{
}

void myTcpServer::incomingConnection(int handle)
{

    myClientSocket *client=new myClientSocket(this,handle);
    client->setSocketDescriptor(handle);

    connect(client,SIGNAL(ClientReadData(int,QString,int,QByteArray)),this,SLOT(ReadData(int,QString,int,QByteArray)));
    connect(client,SIGNAL(ClientDisConnect(int,QString,int)),this,SLOT(DisConnect(int,QString,int)));

    emit ClientConnect(handle, client->peerAddress().toString(),client->peerPort());

    ClientSocketList.append(client); //将新的连接添加到列表
    ClientSocketID.append(handle);

}

void myTcpServer::ReadData(int clientID,QString IP,int Port,QByteArray data)
{
    emit ClientReadData(clientID,IP,Port,data);
}

void myTcpServer::DisConnect(int clientID,QString IP,int Port)
{

    for (int i=0;i<ClientSocketID.count();i++)
    {
        if (ClientSocketID[i]==clientID)
        {
              ClientSocketList.removeAt(i);  //从列表中移除该连接
              ClientSocketID.removeAt(i);    //两个列表都要释放

            emit ClientDisConnect(clientID,IP,Port);
            break;
        }
    }

    /*  还可以这样写 要ClientSocketList有释放，ClientSocketID没有释放，导致两个大小不等
        而for循环里头是用的ClientSocketID的index来取ClientSocketList的成员

    {
    //提取index
    int index=0;
    bool has=false;
    for(int i=0;i<ClientSocketID.size();i++)
    {
        if(ClientSocketID.at (i)==clientID)
        {
            index=i;
            has=true;
            break;
        }
    }
    if(!has)return ;
    //删除链接
    ClientSocketList.removeAt(index);
    ClientSocketID.removeAt(index);
    emit ClientDisConnect(clientID,IP,Port);
   }

   */
}

//指定客户端连接发消息
void myTcpServer::SendData(int clientID,QString IP,int Port,QByteArray data)
{

    for (int i=0;i<ClientSocketID.count();i++)
    {
        if (ClientSocketID[i]==clientID)
        {

            ClientSocketList[i]->write(data);
            break;
        }
    }
}
