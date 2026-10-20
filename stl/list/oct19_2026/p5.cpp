//Search for a given value using a manual iterator loop.

#include<iostream>
#include<list>

int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        lis.push_back(12*i);
    }
    std::cout<<"print list\n";
    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    int num;
    std::cout<<"enter number for search\n";
    std::cin>>num;

    for(std::list<int>::iterator it =lis.begin();it!=lis.end();it++)
    {
        if(num == *it)
        {
            std::cout<<"number avaialable\n";
            break;
        }
    }

}