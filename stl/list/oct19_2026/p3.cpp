//Insert 25 before the element 30 using an iterator and insert().

#include<iostream>
#include<list>

int main()
{
    std::list<int>lis;

    for(int i=0;i<10;i++)
    {
        if(i==5)lis.push_back(24);
        else lis.push_back(i*5);
    }
    std::cout<<"print data\n";
    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    for(std::list<int>::iterator it=lis.begin();it!=lis.end();it++)
    {
        if(*it==30)
        {
            it = lis.insert(it,25);
            break;
        }
    }

    std::cout<<"print data after insert 25\n";
    for(auto m:lis)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

}