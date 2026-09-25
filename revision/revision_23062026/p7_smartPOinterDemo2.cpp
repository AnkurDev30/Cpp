//smart pointer demo
#include<iostream>
#include<memory>
int main()
{
    std::unique_ptr<char>p(new char);
    std::cout<<"enter char"<<std::endl;
    std::cin>>*p;
    std::cout<<"p ="<<*p<<std::endl;
}