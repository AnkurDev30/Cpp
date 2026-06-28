#include<iostream>
#include<string>
#include<map>
int main()
{
    std::string str1;
    std::map<char,int>m;
    std::cout<<"Enter string \n";
    getline(std::cin,str1);

    for(char ch:str1)
    {
        m[ch]++;
    }
    for(auto &a :m)
    {
        if(a.second==1)
        {
            std::cout<<a.first<<std::endl;
        }
    }

}