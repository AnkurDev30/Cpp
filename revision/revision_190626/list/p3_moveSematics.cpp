#include<iostream>
#include<string>
int main()
{
    std::string a1="hello";
    std::string a2=std::move(a1);

    std::cout<<a1<<std::endl;
    std::cout<<a2<<std::endl;
}