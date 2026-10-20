/*
Create and display a vector
Create a vector of integers, insert 5 numbers using push_back(), 
and display them using a normal for loop.
Learn: vector, push_back(), size(), indexing
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<5;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print vector\n";

    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
}

