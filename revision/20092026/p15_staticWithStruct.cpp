#include<iostream>

struct Abs 
{
    static int a;
};
int Abs::a=50;
int main()
{
    Abs a1;
    a1.a = 5;
    std::cout<<"a = "<<a1.a<<std::endl;
}