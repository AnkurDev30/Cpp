
/*
1. Create and print a list

Create std::list<int>
Insert 10 numbers
Print using iterator
*/
#include<iostream>
#include<list>
#include<algorithm>

int main()
{
    std::list<int> l;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            l.push_back(i); //9753102468
        }
        else l.push_front(i);
    }

    std::cout<<"print list data\n";
    for(auto m:l)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
}
