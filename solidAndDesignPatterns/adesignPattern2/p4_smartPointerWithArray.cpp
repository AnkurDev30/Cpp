#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int[]>arr =std::make_unique<int[]>(5);

    for(int i=0;i<5;i++)
    {
        int a;
        std::cout<<"enter value\n";
        std::cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<"unique ptr :"<<arr[i]<<std::endl;
    }

    int *p=arr.get();

    for(int i=0;i<5;i++)
    {
        std::cout<<"new ptr :"<<p[i]<<std::endl;
    }
}