#include<iostream>
int main()
{
    auto m=[]()
    {
        return 10;
    };
    std::cout<<m()<<std::endl;
}