#include<iostream>
int fun(int,int);//no error signature allow twice 
int fun(int,int);
int main()
{
    int a;
    a =fun(30,30);
    std::cout<<a<<std::endl;
    return 0;
}
int fun(int x,int y)
{
    return x+y;
}