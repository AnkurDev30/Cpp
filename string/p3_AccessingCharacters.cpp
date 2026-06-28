//Accessing Characters
#include<iostream>
#include<string>
int main()
{
    std::string str = "geeksForGeeks";
    std::cout<<str[2]<<std::endl;
    std::cout<<str[3]<<std::endl;
    std::cout<<str[4]<<std::endl;
    std::cout<<str[5]<<std::endl;

    std::cout<<str.at(6)<<std::endl;
}