//Program 8
//Reverse vector.

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vect;
    int a;
    std::cout<<"Enter no of element\n";
    std::cin>>a;

    std::cout<<"Enter Data in vector\n";
    
    for(size_t i=0;i<a;i++)
    {
        int data;
        std::cout<<"Enter data for index = "<<i<<std::endl;
        std::cin>>data;
        vect.push_back(data);
    }
    std::cout<<"Display data before reverse\n";
    for(size_t i=0;i<vect.size();i++)
    {
        std::cout<<"vect ["<<vect[i]<<"]\n";
    }
    //reverse.
    size_t i,j;
    for( i=0,j=vect.size()-1;j>i;i++,j--)
    {
        int temp=vect[i];
        vect[i]=vect[j];
        vect[j]=temp;
    }
    std::cout<<"Display data after reverse\n";
    for(size_t i=0;i<vect.size();i++)
    {
        std::cout<<"vect ["<<vect[i]<<"]\n";
    }

    std::cout<<"capacity = "<<vect.capacity()<<std::endl;
}