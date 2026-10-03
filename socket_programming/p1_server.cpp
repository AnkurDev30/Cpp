#include<iostream>
#include<unistd.h>//unix linux network
#include<netinet/in.h>//ipv4 and ipv 6
#include<arpa/inet.h>//communication for ipv4/6
#include<sys/socket.h>//socket related api
struct sockaddr_in serv;
int main()
{
    int bind_ret;
    std::cout<<"hello server\n";

    int cSock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

    if(cSock<0)
    {
        std::cout<<"error\n";
    }
    else
    {
        std::cout<<"socket success: -- "<<cSock<<std::endl;
    }
//initiazlize socket address
    serv.sin_family = AF_INET;
    serv.sin_port = htons(9906);
    serv.sin_addr.s_addr = INADDR_ANY;

    bind_ret = bind(cSock,(sockaddr*)&serv,sizeof(serv));

    if(bind_ret<0)
    {
        std::cout<<"bind fail\n";
    }
    else
    {
        std::cout<<"bind pass\n";

        int listen_ret = listen(cSock,5);
        if(listen_ret<0)
        {
            std::cout<<"listen fail\n";
        }
        else
        {
             std::cout<<"listen pass\n";
        }
    }


}