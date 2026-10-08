#include<iostream>
int main()
{
    int *p =new int ();

    std::cout<<"enter p :\n";
    std::cin>>*p;

    std::cout<<"display : "<<*p<<std::endl;

    int *a = new int[5];

    std::cout<<"enter a :\n";
    for(int i=0;i<5;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"display : \n";

    for(int i=0;i<5;i++)
    {
        std::cout<<a[i];
    }
    std::cout<<std::endl;
    delete p;
    delete [] a;
}