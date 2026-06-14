//Program 7
//Delete element at position.

#include<iostream>
#include<vector>
int main()
{
    std::vector<int> vect;
    int ele;
    std::cout<<"Enter number of element\n";
    std::cin>>ele;

    for(size_t i=0;i<ele;i++)
    {
        int a;
        std::cout<<"Enter data for vector\n";
        std::cin>>a;
        vect.push_back(a);
    }
    std::cout<<"Display data before delete\n";
    
    for(size_t i=0;i<vect.size();i++)
    {
        std::cout<<"Data = vect ["<<vect[i]<<" ]\n";
    }

    std::cout<<"Enter Index number for delete\n";
    int del;

    std::cin>>del;

    if(del<=vect.size())
    {
        vect.erase(vect.begin()+del);
    }
    else
    {
        std::cout<<"Index not available\n";
    }
    std::cout<<"Display data after delete\n";
    
    for(size_t i=0;i<vect.size();i++)
    {
        std::cout<<"Data = vect ["<<vect[i]<<" ]\n";
    }
}