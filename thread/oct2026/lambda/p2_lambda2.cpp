#include<iostream>

int main()
{
    auto p =10;

    [=](){
        std::cout<<p<<std::endl;
    }();
    int x=100;
    [&]()
    {
        p++;
        x++;
    }();

    std::cout<<p<<" "<<x<<std::endl;

    [x]()
    {
        std::cout<<"x="<<x<<std::endl;
    }();
    [&x]()
    {
        x=90;
        std::cout<<"x="<<x<<std::endl;
    }();

    auto l = [&](int m)
    {
        std::cout<<x<<" "<<p<<" "<<m<<std::endl;
    };
    l(7);
}