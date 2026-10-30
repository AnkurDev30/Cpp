//Implement dynamic memory allocation for an array

#include<iostream>

int main()
{
    int *p;
    p=new int [10];
    std::cout<<"enter array\n";

    for(int i=0;i<10;i++)
    {
        p[i] = rand()%200;
    }

    std::cout<<"print array\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";
    delete [] p;
}