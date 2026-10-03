//server program practice

#include<iostream>
#include<unistd.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>

struct sockaddr_in serv;

int main()
{
    int socket_Pgm = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

    if(!(socket_Pgm<0))
    {
        std::cout<<"socket create successfully\n";

        //initialize socket address 
        serv.sin_family = AF_INET;
        serv.sin_addr.s_addr = INADDR_ANY;
        serv.sin_port =htons(9907);

        int bind_ret = bind(socket_Pgm,(sockaddr*)&serv,sizeof(serv));
        if(!(bind_ret<0))
        {
            std::cout<<"bind create successfully\n";
            int listen_ret = listen(socket_Pgm,5);
            if(!(listen_ret<0))
            {
                std::cout<<"listen create successfully\n";
            }
            else
            {
                std::cout<<"listen not create successfully\n";
            }
        }
        else
        {

        }
    }
    else
    {

    }
}