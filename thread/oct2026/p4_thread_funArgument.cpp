#include<iostream>
#include<thread>
#include<mutex>

void fun(int b)
{
    std::cout<<"b = "<<b<<std::endl;
}
int main()
{
    int a=10;
    std::thread t1(fun,a);
    t1.join();
}