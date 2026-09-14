/**
Modify Vector Elements Using Iterator
Create a vector of integers and multiply every element by 2 using an iterator.
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;
    int apple;
    std::cout<<"enter value\n";
    std::cin>>apple;
    vec.push_back(apple);

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        *it=3;
    }
    std::cout<<"after modify = "<<vec[0]<<std::endl;
}