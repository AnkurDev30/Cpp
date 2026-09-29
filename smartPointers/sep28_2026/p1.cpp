#include<iostream>
#include<memory>


int main()
{
    std::unique_ptr<int>p=std::make_unique<int>(22);
    std::cout<<*p<<std::endl;

    //p get return the pointer and we can pass to anotehr pointer 
    int *a = p.get();

    std::cout<<*a<<" a\n";

    std::cout<<a<<" "<<p.get()<<std::endl;
}