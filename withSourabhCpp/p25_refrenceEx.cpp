#include<iostream>

int main()
{

   // int i=5;
   // int&j=i;
   // int p=10;
   // j=p;
   // std::cout<<"i = "<<i<<" j "<<j<<"\n";

   
   //const int *p //refrence
   //int const *p
//   int a=10;
//
//   int *const p=&a;
//
//
//    *p=20;
//    std::cout<<"a = "<<a<<" *p = "<<*p<<std::endl;
//   a=100;
//   std::cout<<"a = "<<a<<" *p = "<<*p<<std::endl;
//
//   int b=1000;
//   p=&b;
//
//    std::cout<<"b = "<<b<<" *p = "<<*p<<std::endl;

    int a=100;
    int &b=a;

    int *p=&a;
    b=100;//allow
    b=j;//alow

    p=&b;

    &b=p;//error

    //passing 3 types:-  value , address , refrence



}