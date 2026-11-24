//Demonstrate default arguments with a function.

#include<iostream>

void fun1(int x, int y=10,int z=20)
{
    std::cout<<"total = "<<x+y+z<<std::endl;
}


int main()
{
    fun1(1);
    fun1(1,20);
    fun1(10,20,20);
}