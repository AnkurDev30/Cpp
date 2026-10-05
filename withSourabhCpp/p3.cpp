#include<iostream>

class firstClass 
{
    public:
    int a;
    void fun(int x)
    {
        a=x;
        std::cout<<a<<std::endl;
    }
};

int main()
{
    firstClass f1; // memory a 11, 7 
    firstClass f2; //memory a 22

    f1.fun(11);
    f2.fun(22);
}