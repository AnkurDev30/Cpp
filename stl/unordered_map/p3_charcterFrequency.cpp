#include<iostream>
#include<string>
#include<unordered_map>

int main()
{
    std::unordered_map<char,int>mp;
    std::string str;
    std::cout<<"enter string\n";
    std::cin>>str;

    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }

    for(auto m:mp)
    {
        std::cout<<m.first<<" "<<m.second<<std::endl;
    }
    
}