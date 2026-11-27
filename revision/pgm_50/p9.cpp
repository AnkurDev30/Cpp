/**
Program 4: Resize a dynamic array
- Allocate an array of size 5.
- Store 5 elements.
- Create another array of size 10.
- Copy the previous 5 elements.
- Add 5 new elements.
- Delete the old array.
- Print the new array.
*/

#include<iostream>

int main()
{

    int *p = new int[5];

    std::cout<<"fill  data\n";

    for(int i=0;i<5;i++)
    {
        p[i] = rand()%100;
    }

    std::cout<<"print data\n";

    for(int i=0;i<5;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    int a[5];
    std::cout<<"copy data\n";
    for(int i=0;i<5;i++)
    {
        a[i]=p[i];
    }
    
    delete p;
    p = nullptr;

    p=new int[10];

    for(int i=0;i<10;i++)
    {
        p[i] = rand()%100;
    }

    std::cout<<"print new data\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<"copy old data\n";

    for(int i=0,j=10;i<5;i++)
    {
        p[j]=a[i];
        j++;
    }
    std::cout<<"\n";


    std::cout<<"print old + new data\n";

    for(int i=0;i<15;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    delete[] p;
}