/**
Delete first element.
Delete last element.
Sort list.
Reverse list.
Merge two lists.
*/

#include<iostream>
#include<list>
int main()
{
    std::list<int>listData;
    int a;
    int opt=0;

    for(int i=1;i<10;i++)
    {
        listData.push_front(i*11);
    }

    //delete first data.
    //listData.erase(listData.begin());

    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\nbefore delete\n";
    //delete first data.
    listData.erase(listData.begin());
    std::cout<<"\nafter from start delete\n";
    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\n";

    //delete last data.
    listData.pop_back();

    std::cout<<"\nafter from end delete\n";
    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\n";

    listData.reverse();
    std::cout<<"\nafter reverse\n";
    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\n";

    listData.sort();
    std::cout<<"\nafter sort\n";
    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\n";

    std::list<int>listData2={1,2,3,4,5,6,7,8,9};

    listData.merge(listData2);

    std::cout<<"\nafter merge\n";
    for(auto &b:listData)
    {
        std::cout<<b<<" ";
    }
    std::cout<<"\n";

}