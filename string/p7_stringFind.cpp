//string find string
#include<iostream>
int main()
{
    std::string str1;
    std::cout<<"enter string \n";
    getline(std::cin,str1);

    std::cout<<"enter sub str\n";
    std::string sbt;
    getline(std::cin,sbt);

    int pos = str1.find(sbt);
    std::cout<<pos<<std::endl;
}