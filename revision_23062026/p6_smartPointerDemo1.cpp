//smart pointer demo
#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int> p(new int);
    std::cout<<"enter value\n";
    std::cin>>*p;

    std::cout<<"p value : "<<*p<<std::endl;
}
