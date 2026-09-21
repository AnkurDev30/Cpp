#include<iostream>
#include<memory>
int main()
{
    std::unique_ptr<int[]>p=std::make_unique<int[]>(5);
    for(int i=0;i<5;i++)
    {
        p[i]=i*10;
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";
}