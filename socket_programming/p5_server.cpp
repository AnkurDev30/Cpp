#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/select.h>
#include<stdexcept>
#define ERROR_CODE_SOCKET -1000
#define ERROR_CODE_BIND   -1001
#define ERROR_CODE_LISTEN -1002
struct sockaddr_in serv;

class sc 
{
    public:
        int socketInit();
        void addressInitialize();
        int bindConnection(int sock);
        int listenServer(int sock);
};
int sc::socketInit()
{
    int sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    
    if(sock<0)
        return ERROR_CODE_SOCKET;
    else return sock;
}
void sc::addressInitialize()
{
    serv.sin_family = AF_INET;
    serv.sin_port = htons(9988);
    serv.sin_addr.s_addr = INADDR_ANY;
}
int sc::bindConnection(int sock)
{
    int bindRet = bind(sock,(sockaddr*)&serv,sizeof(serv));
    if(bindRet<0)
        return ERROR_CODE_BIND;
    else return bindRet;
}
int sc::listenServer(int sock)
{
    int listenRet = listen(sock,5);
    if(listenRet<0)
        return ERROR_CODE_LISTEN;
    else return listenRet;
}
int main()
{
    sc obj;
    int retVar=0;
    retVar = obj.socketInit();
    int sock=retVar;
    if(retVar!=ERROR_CODE_SOCKET)
    {
        std::cout<<"Socket Init Success\n";
        obj.addressInitialize();
        retVar = obj.bindConnection(sock);
        if(retVar!=ERROR_CODE_SOCKET)
        {
            std::cout<<"Bind  Success\n";
            retVar = obj.listenServer(sock);
            if(retVar!=ERROR_CODE_SOCKET)
            {
               std::cout<<"listen Success\n"; 
               fd_set read;

               FD_ZERO(&read);
               struct timeval t;
               t.tv_sec=10;
               t.tv_usec=0;
               FD_SET(sock,&read);
               int selectIn = select
                                (
                                    sock+1,
                                    &read,
                                    nullptr,
                                    nullptr,
                                    &t
                                );
                if(selectIn<0)
                {
                    throw "Error in select\n";
                }
                else
                {
                    std::cout<<"select part done\n";
                }
               if(FD_ISSET(sock,&read))
               {
                    int acceptDta = accept(sock,nullptr,nullptr);
                    if(acceptDta>=0)
                    {
                        std::cout<<"connected\n";
                    }
                    else
                    {
                        std::cout<<"not connected\n";
                    }
               }
            }
        }
    }
}