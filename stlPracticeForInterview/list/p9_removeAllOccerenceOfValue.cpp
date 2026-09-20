//p9_removeAllOccerenceOfValue.cpp

#include<iostream>
#include<list>
#include<algorithm>
/*
in vector we have to follw first sort then unique then erase with remove
*/
int main()
{
    std::list<int>l;

    for(int i=0;i<20;i++)
    {
        if(i%2==0)l.push_front(20);
        else l.push_back(i);
    }

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    l.remove(20);

    std::cout<<"print data\n";

    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   
}