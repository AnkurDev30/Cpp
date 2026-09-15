//read value.
#include<iostream>
int main()
{
    int x=10;
    int y=20;
    [=]()
    {
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;
       // x=30; this will give error.
    }();
}