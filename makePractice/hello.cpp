#include<iostream>
extern int fun();
int main()
{
    int y = fun();
    std::cout<<"hello\n"<<y<<std::endl;
}