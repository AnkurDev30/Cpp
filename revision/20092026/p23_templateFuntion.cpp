#include<iostream>

template<typename T>
T fun(T a,T b)
{
    return a+b;
}
int main()
{
    int a=11,b=12;
    int c= fun(a,b);
    std::cout<<c<<std::endl;
    return 0;
}