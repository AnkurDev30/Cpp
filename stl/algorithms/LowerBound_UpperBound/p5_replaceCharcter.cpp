#include<iostream>
#include<algorithm>
#include<string>

int main()
{
    std::string str;

    std::cout<<"enter the string\n";
    std::cin>>str;

    std::cout<<"o/p : "<<str<<std::endl;

    std::replace(str.begin(),str.end(),'A','B');

    std::cout<<"new o/p : "<<str<<std::endl;
}