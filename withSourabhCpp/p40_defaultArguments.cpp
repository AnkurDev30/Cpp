#include<iostream>

int fun(int a,int b,int c=10)
{//    <-----------------------                 _
    return a+b+c;
}

int main()
{
    int z = fun(6,7);

    std::cout<<"result = "<<z<<std::endl;
}