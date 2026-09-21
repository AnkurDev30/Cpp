#include<iostream>
#include<memory>

int main()
{
    std::shared_ptr<int>p1=std::make_shared<int>(10);
    std::shared_ptr<int>p2=std::make_shared<int>(20);

    std::cout<<" data1 : "<<*p1<<std::endl;
    std::cout<<" data2 : "<<*p2<<std::endl;
}