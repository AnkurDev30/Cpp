//collect substrin
#include<iostream>
#include<string>
int main()
{
    std::string str1;
    std::cout<<"enter a string\n";
    getline(std::cin,str1);

    std::cout<<str1<<std::endl;

    std::string sbstr;

    sbstr = str1.substr(5,2);

    std::cout<<"new string = "<<sbstr<<std::endl;
}