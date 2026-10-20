/*
Create a list of integers using push_back() and display all elements.
*/

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
        std::cout<<m<<"->";
    }
    std::cout<<"\n";
}

