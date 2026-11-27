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
APIs: push_back(), size(), capacity(), begin(), end().
*/

#include<iostream>
#include<vector>
int main()
{

    std::vector<int>vec;

    std::cout<<"create for 10 element\n";

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"Display vector via simple loop\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    for(std::vector<int>::iterator it = vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";


    std::cout<<"vector size = "<<vec.size()<<std::endl;
    std::cout<<"vector capacity = "<<vec.capacity()<<std::endl;
}