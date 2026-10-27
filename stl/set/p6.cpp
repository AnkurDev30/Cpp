#include<iostream>
int main()
{

    int a=10;
   // int &&b=a;//give error

    int &&b=std::move(a);
    std::cout<<a<<" "<<b<<std::endl;
    a++;
    std::cout<<a<<" "<<b<<std::endl;
}