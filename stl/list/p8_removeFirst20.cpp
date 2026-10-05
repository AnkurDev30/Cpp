//remove first 20

#include<iostream>
#include<list>
#include<algorithm>
int main()
{
    std::list<int>l;

    for(int i=0;i<20;i++)
    {
        if(i%2==0)l.push_back(20);
        else l.push_back(10*i);
    }

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    auto f = std::find(l.begin(),l.end(),20);

    if(f!=l.end())
    {
        f = l.erase(f);
    }

    std::cout<<"print data aftr remove 20\n";

    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}