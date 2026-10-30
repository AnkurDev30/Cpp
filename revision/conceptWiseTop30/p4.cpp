//Return a reference vs return a pointer from a function

#include<iostream>

int& fun(int& a)
{
    a++;
    return a;
}
int* fun(int* p)
{
    ++*p;
    return p;
}
int main()
{
    int x=10;
    int y =fun(x);
    std::cout<<y<<x<<std::endl;

    int *z = fun(&x);
     std::cout<<*z<<std::endl;

}