#include<iostream>
int x=10;
void fun()
{
    std::cout<<"x in fun : "<<x<<std::endl;
}
int main()
{
    int x=20;
    fun();
    std::cout<<"x in main : "<<x<<std::endl;
}