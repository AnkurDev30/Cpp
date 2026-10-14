#include<iostream>

#include<list>

int main()
{
    std::list<int>l;
    for(int i=0;i<10;i++)
    {
        l.push_back(i);
    }
    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    for(std::list<int>::iterator l1=l.begin();l1!=l.end();l1++)
    {
        std::cout<<*l1<<" ";
    }
}