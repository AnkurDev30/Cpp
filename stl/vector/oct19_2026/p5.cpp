/*
Traverse using different loops
Display the same vector using an index-based loop, an iterator, 
and a range-based for loop.
Learn: iterators, begin(), end(), auto
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<5;i++)
    {
        vec.push_back(rand()%20);
    }
    std::cout<<"print data vector index based\n";

    for(int i=0;i<5;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"print data iteartor based\n";
    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
    std::cout<<"print data range based : \n";
    for(auto m :vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}