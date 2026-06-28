#include<iostream>
int z=40;
auto bd=[&p]()//capture work use when lambda declare inside a scope ?
{
    int c=7;
    z=100;
    p=23;
    return c;
};
int main()
{
    int p=0;
    int a=bd();
    std::cout<<a<<std::endl;
    std::cout<<z<<std::endl;
    std::cout<<p<<std::endl;
}