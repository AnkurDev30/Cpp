//length of string

#include<iostream>
#include<string>
int main()
{
    std::string str ;
    std::cout<<"enter string\n";
    std::cin>>str;

    std::cout<<"Length Of String = "<<str.length()<<std::endl;
    std::cout<<"Length Of String = "<<str.size()<<std::endl;
}