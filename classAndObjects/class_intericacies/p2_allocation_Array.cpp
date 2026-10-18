#include<iostream>

int main()
{
    int *p = new int[10];
    for(int i=0;i<10;i++)
    {
        p[i]=rand()%200;
    }
    for(int i=0;i<10;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    delete []p;
}