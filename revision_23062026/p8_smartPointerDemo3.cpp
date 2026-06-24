//smart pointer demo with float and string

#include<iostream>
#include<memory>
int main()
{
    std::unique_ptr<float>fp(new float);
    std::cout<<"enter float value\n";
    std::cin>>*fp;

    std::cout<<"float value = "<<*fp<<std::endl;


    std::unique_ptr<std::string>s(new std::string);
    std::cout<<"Enter name:"<<std::endl;
    std::cin>>*s;

    std::cout<<"name  = "<<*s<<std::endl;
}