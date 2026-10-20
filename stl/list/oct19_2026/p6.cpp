//Count the number of elements without using size().

#include<iostream>
#include<list>

int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        lis.push_back(i*90);
    }
    std::cout<<"print list\n";
    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\ncount the elemenets\n";
    int count=0;
    for(std::list<int>::iterator it = lis.begin();it!=lis.end();it++)
    {
        count++;
    }
    std::cout<<"number of counts = "<<count<<std::endl;
}