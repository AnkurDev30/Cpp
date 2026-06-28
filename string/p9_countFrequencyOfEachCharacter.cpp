//Count Frequency of Each Character
#include<iostream>
#include<string>
#include<map>
int main()
{
    std::string str1;
    std::map<char,int>m;
    std::cout<<"Enter a String\n";
    getline(std::cin,str1);

    for(char ch:str1)
    {
        m[ch]++;
    }

    for(auto a:m)
    {
        std::cout<<a.first<< " "<<a.second<<std::endl;
    }
}