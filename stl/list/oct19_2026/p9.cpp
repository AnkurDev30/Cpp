//Merge two lists by manually traversing them and inserting elements.
#include<iostream>
#include<list>

int main()
{
    std::list<int>lis1;
    std::list<int>lis2;

    for(int i=0;i<10;i++)
    {
        lis1.push_back(rand()%200);
        lis2.push_back(rand()%200);
    }
    std::cout<<"first ls1\n";
    for(auto m:lis1)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n ";
    std::cout<<"first ls2\n";
    for(auto m:lis2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n ";
    for(std::list<int>::iterator it=lis2.begin();it!=lis2.end();it++)
    {
        lis1.push_back(*it);
    }
    std::cout<<"after merge\n";
    for(auto m:lis1)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n ";
}