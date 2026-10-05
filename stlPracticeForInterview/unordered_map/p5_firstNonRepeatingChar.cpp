#include<iostream>
#include<unordered_map>
#include<string>
int main()
{
    std::string str;
    std::cout<<"enter string\n";
    std::cin>>str;

    std::unordered_map<char,int>mp;

    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }

    for(auto m:mp)
    {
        std::cout<<"character : "<<m.first<<
        " frequency : "<<m.second<<std::endl;
    }

    std::cout<<"find first not repeat char\n";

    for(int i=0;i<str.length();i++)
    {
        if(mp[str[i]]==1)
        {
            std::cout<<"first non repeating char : "<<str[i]<<std::endl;
            break;
        }
    }



}