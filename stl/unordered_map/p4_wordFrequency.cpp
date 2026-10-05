#include<iostream>
#include<unordered_map>
#include<string>
int main()
{
    std::unordered_map<std::string,int>mp;

    std::string names[10];

    for(int i=0;i<10;i++)
    {
        std::cout<<"enter name : "<<i<<std::endl;
        std::cin>>names[i];
        mp[names[i]]++;
    }

    std::cout<<"print names : \n";

    for(auto m:mp)
    {
        std::cout<<"name : "<<m.first<<" frequency : "<<m.second<<std::endl;
    }


}