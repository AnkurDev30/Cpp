//sort a list

#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int>l;

    for(int i=0;i<10;i++)
    {
        static int a=0;
        a++;
        l.push_back(i*a);
        l.push_front(i*9);
    }

    std::cout<<"print data\n";
    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    l.sort();


    std::cout<<"print data after sort\n";
    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}