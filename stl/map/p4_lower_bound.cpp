#include<iostream>
#include<map>
int main()
{
    std::map<int,char>m;
    int a=1;
    for(int i=1;i<=10;i++)
    {
        m[a++]=i*3;
    }

    std::cout<<"print data\n";

    for(auto p:m)
    {
        std::cout<<"A "<<p.first<<" "<<p.second;
    }
    std::cout<<std::endl;
    auto f=m.lower_bound(14);

    std::cout<<"lower bound = "<<f->first<<" "<<f->second<<std::endl;
}