/*
Delete the first element, last element, and a specified 
element using pop_front(), pop_back(), and erase().
*/

#include<iostream>
#include<list>
int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        lis.push_back(i+8);
    }

    std::cout<<"print list:\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::cout<<"first remove front\n";

    lis.pop_front();
    std::cout<<"print list after remove from front:\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n"; 
    std::cout<<"second remove back\n";

    lis.pop_back();
    std::cout<<"print list after remove from back:\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n"; 

    int specified;

    std::cout<<"enter data for remove specified number\n";
    std::cin>>specified;
    for(std::list<int>::iterator it = lis.begin();it!=lis.end();it++)
    {
        if(*it==specified)
        {
            it = lis.erase(it);
            break;
        }
    }
    std::cout<<"print list after specified number remove\n";

    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n"; 

}