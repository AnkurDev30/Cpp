#include<iostream>// for input output console
#include<sys/socket.h>//for socket system call
#include<netinet/in.h>//for ipv4 and ipv6
#include<arpa/inet.h>//for converstion of ipv4 and ipv6
#include<unistd.h>//for linux and unix

struct sockaddr_in serv;

int main()
{
    //first create socket
    int sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(!(sock<0))
    {
        std::cout<<"socket successfull\n";
        serv.sin_family = AF_INET;
        serv.sin_port = htons(9000);
        serv.sin_addr.s_addr = INADDR_ANY;
        int bindRet = bind(sock,(sockaddr*)&serv,sizeof(serv));
        if(!(bindRet<0))
        {
            std::cout<<"bind successfull\n";
            int listenRet = listen(sock,5);
            if(!(listenRet<0))
            {
                std::cout<<"listen successfull\n";
            }
        }
    }

}