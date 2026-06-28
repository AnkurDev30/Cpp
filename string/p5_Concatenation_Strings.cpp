//Concatenation of Strings
#include<iostream>
#include<string>
int main()
{
    std::string str1;
    std::string str2;
    std::cout<<"enter str 1\n";
    std::cin>>str1;
    std::cout<<"enter str 2\n";
    std::cin>>str2;
    str1 = str1+str2;
    std::cout<<"1 "<<str1<<std::endl;

    std::string str3;
    std::cout<<"enter new string \n";
    std::cin>>str3;

    str3.append(str1);
    std::cout<<"2 "<<str3<<std::endl;
}