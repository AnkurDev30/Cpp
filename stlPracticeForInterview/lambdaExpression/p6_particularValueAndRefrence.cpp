#include<iostream>
int x=40;
int main()
{
    int y=50;
    int z=90;

    auto lambda = [x,y,z]()
    {
        std::cout<<"x = "<<x<<std::endl;
        std::cout<<"y = "<<y<<std::endl;
        std::cout<<"z= "<<z<<std::endl;
    };
    auto lambda1 = [&]()
    {
        x++;
        y++;
        z++;
    };
    auto lambda2 = [&]()
    {
        std::cout<<"x = "<<x<<std::endl;
        std::cout<<"y = "<<y<<std::endl;
        std::cout<<"z= "<<z<<std::endl;
    };
    lambda();
    lambda1();
    lambda2();
}