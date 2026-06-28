#include<iostream>
int main()
{
    int x=20;
    int y=30;
    auto ab=[=](int a,int b)
    {
        return x+y;
    };
    int p = ab(1,1);
    std::cout<<x<<" "<<y<<std::endl;
    intb q= ab(3,4);
    std::cout<<x<<" "<<y<<std::endl;
}