/*
Find an element and its index
Search for 30 in {10, 20, 30, 40}. Print its index, or report that it was not found.
Algorithms: std::find(), iterator subtraction
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%200);
    }

    std::cout<<"print vector\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    int f;
    std::cout<<"enter value for find\n";
    std::cin>>f;

    auto fin = std::find(vec.begin(),vec.end(),f);

    if(fin!=vec.end())
    {
        std::cout<<"find "<<"distance "<<fin -vec.begin()<<std::endl;
    }
}