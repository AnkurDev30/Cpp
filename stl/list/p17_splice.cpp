//splice we can transfer data from one list to another.

#include<iostream>
#include<list>

int main()
{
    std::list<int>l1;
    std::list<int>l2;

    for(int i=0;i<10;i++)
    {
        l1.push_back(i);
    }

    std::cout<<"print data: l1\n";


    for(auto m:l1)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    l2.splice(l2.end(),l1);

    std::cout<<"print data: l2\n";


    for(auto m:l2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}