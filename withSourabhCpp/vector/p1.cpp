/**
Level 1 – Basic vector operations
Program 1: Vector creation and traversal
- Create a vector of integers.
- Insert 10 elements using push_back().
- Display elements using:
  - Normal for loop.
  - Range-based for loop.
  - Iterator.
- Find vector size and capacity.
*/

#include<iostream>

#include<vector>

#include<cstdlib>

int main()
{

    std::vector<int>vec;

    std::cout<<"create a vector for 10 int\n";

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%1000);
    }

    std::cout<<"print vector Normal for loop\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\nRange-based for loop\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }

    std::cout<<"\nIterator.\n";

    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }

    std::cout<<"\n";

    std::cout<<"size = "<<vec.size()<<std::endl;
    std::cout<<"capacity = "<<vec.capacity()<<std::endl;
}