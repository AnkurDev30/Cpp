//define map read and print data

#include<iostream>
#include<map>

int main()
{
    std::map<int , float>m;
    int a=100;
    for(int i=0;i<10;i++)
    {
        m[a++]=i;
    }

    for(auto p:m)
    {
        std::cout<<p.first<<" "<<p.second<<std::endl;
    }

    std::cout<<m.at(109)<<" "<<m[5]<<std::endl;
}