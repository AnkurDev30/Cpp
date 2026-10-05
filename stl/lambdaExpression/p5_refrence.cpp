//refrence read.
#include<iostream>
int x=20;
int main()
{
    int y=40;
    [&]()
    {
        x=30;
        y=50;
    }();
    std::cout<<x<<" "<<y<<std::endl;
}