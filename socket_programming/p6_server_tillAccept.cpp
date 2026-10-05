#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/select.h>

struct sockaddr_in serv;
struct timeval tx;
fd_set read;
int main()
{
    /*initilize socket*/
    int sockRet = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(sockRet>=0)
    {
        std::cout<<"Socket successfull\n";
        /*intialize address */
        serv.sin_family = AF_INET;
        serv.sin_port = htons(9000);
        serv.sin_addr.s_addr = INADDR_ANY;

        /* bind init*/
        int bindRet = bind(sockRet,(sockaddr*)&serv,sizeof(serv));
        if(bindRet>=0)
        {
            std::cout<<"bind successfull\n";
            int listenRet = listen(sockRet,5);
            if(listenRet>=0)
            {
                std::cout<<"listen successfull\n";
                FD_ZERO(&read);
                tx.tv_sec=3;
                tx.tv_usec=0;
                FD_SET(sockRet,&read);
                while(true)
                int sel = select(sockRet+1,&read,nullptr,nullptr,&tx);
                if(sel>=0)
                {
                    if(FD_ISSET(sockRet,&read))
                    {
                        int actRet = accept(sockRet,nullptr,nullptr);


                    }
                }
            }
        }
    }
}