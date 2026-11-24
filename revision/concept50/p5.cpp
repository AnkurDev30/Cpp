//Demonstrate a memory leak and fix it using proper memory management.



#include<iostream>

int main()
{

    int *p=new int(5);

    int a=10;
    std::cout<<*p<<" \n";

    delete p;

    p=nullptr;


    p=&a;

    std::cout<<*p<<" \n";

    //forgat to delete resource.cause memory leak

    delete p;
    
}