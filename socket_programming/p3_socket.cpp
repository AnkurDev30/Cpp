//server program

#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/select.h>
struct sockaddr_in serv;

fd_set fr,fw,fe;
int main()
{
    int sock = socket(AF_INET,SOCK_STREAM,0);

    if(!(sock<0))
    {
        serv.sin_family = AF_INET;
        serv.sin_port   =  htons(9900);
        serv.sin_addr.s_addr = INADDR_ANY;

        int retBind = bind(sock,(sockaddr*)&serv,sizeof(serv));

        if(!(retBind<0))
        {
            int retListen = listen(sock,4);
            if(!(retListen<0))
            {
                std::cout<<"listen successfully\n";
                FD_ZERO(&fr);
                FD_SET(sock,&fr);

                if(FD_ISSET(sock,&fr))
                std::cout<<"socket set"<<std::endl;
            }
        }
    }
}