//Implement a function that dynamically allocates an integer array and returns its pointer.

#include<iostream>

int * DAIFun(int aSize)
{
     int *p = nullptr;
    p = new int[aSize];

    std::cout<<"enter data\n";

    for(int i=0;i<aSize;i++)
    {
        std::cin>>p[i];
    }

    std::cout<<"print array\n";

    for(int i=0;i<aSize;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";
    return p;
}

int main()
{
    int sizeOFArray;

    std::cout<<"enter array size\n";

    std::cin>>sizeOFArray;

    int *arryPointer = DAIFun(sizeOFArray);

    std::cout<<"print array in main\n";

    for(int i=0;i<sizeOFArray;i++)
    {
        std::cout<<arryPointer[i]<<" ";
    }  
    std::cout<<"\n"; 
    delete[] arryPointer;
    arryPointer = nullptr;
}