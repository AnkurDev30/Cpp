//Demonstrate dangling pointers and how to prevent them.

#include<iostream>

int *fun()
{
   static int a[5] = {1,2,3,4,5};
    
    return a;
}

int main()
{
    int *p = fun();

    std::cout<<"print \n";

    for(int i=0;i<5;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";


}