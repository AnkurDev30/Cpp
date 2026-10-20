//Reverse a list manually without using list::reverse().

#include<iostream>
#include<list>

int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        lis.push_back(i+7);
    }
    
    std::cout<<"print list\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
/*
    for(std::list<int>::reverse_iterator it=lis.rbegin();it!=lis.end();it++)
    {
        std::cout<<*it<<" ";
    }
*/

    lis.reverse();

    std::cout<<"print list after reverse\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    

    std::cout<<"\n";
}