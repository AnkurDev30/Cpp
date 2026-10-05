/**
Print Vector Using Iterator
Create a vector of 10 integers and print all elements using an iterator.
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> ev;
    std::vector<int>::iterator It;
    for(int i=0;i<10;i++)
    {
        ev.push_back(i*17);
    }
    It=ev.begin();
    for(int i=0;i<10;i++)
    {
        std::cout<<*It<<std::endl;
        It++;
    }
    std::cout<<"Iterator Invalidation\n";
    ev.push_back(12);
    It=ev.begin();//This is solution for iterator invalidation.
    for(int i=0;i<ev.size();i++)
    {
        std::cout<<*It<<std::endl;
        It++;
    }
}