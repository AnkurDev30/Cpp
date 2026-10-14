#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int>p=std::make_unique<int>(10);

    std::cout<<*p<<std::endl;

    int *p1 = p.get();

    std::cout<<*p1<<std::endl;
}