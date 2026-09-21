//lambda with arg.

#include<iostream>
#include<thread>

int main()
{
    std::thread t([](int x)
    {
        std::cout<<x<<std::endl;
    },100);
    t.join();
}