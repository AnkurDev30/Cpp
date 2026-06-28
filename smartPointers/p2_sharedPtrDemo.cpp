//shared ptr 
#include<iostream>
#include<memory>
int main()
{
    std::shared_ptr<int>p(new int());
    std::cout<<"enter a value - \n";
    std::cin>>*p;
    std::shared_ptr<int>q=p;

    std::cout<<*p<<std::endl;
    std::cout<<*q<<std::endl;
    *p=23;
    std::cout<<*p<<std::endl;
    std::cout<<*q<<std::endl;
}