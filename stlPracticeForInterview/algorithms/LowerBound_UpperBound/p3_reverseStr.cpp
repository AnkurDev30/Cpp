//reverse string.
#include<iostream>
#include<string>
#include<algorithm>
int main()
{
    std::string str;
    std::cout<<"enter string\n";
    std::cin>>str;

    std::reverse(str.begin(),str.end());

    std::cout<<"after revese = "<<str<<std::endl;
}