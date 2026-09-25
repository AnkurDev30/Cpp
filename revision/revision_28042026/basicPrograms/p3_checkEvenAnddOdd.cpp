//check evene and odd
#include<iostream>
#define EVEN_OR_ODD(n)  do{ \
                            if((n)%2==0) std::cout<<"even num"<<std::endl; \ 
                            else std::cout<<"odd num"<<std::endl; \
                        }while(0)
                   
int main()
{
    int n;
    std::cout<<"enter num"<<std::endl;
    std::cin>>n;

    EVEN_OR_ODD(n);
    return 0;
}