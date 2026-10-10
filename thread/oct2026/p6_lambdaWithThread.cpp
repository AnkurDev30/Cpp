#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;

void fun()
{
    std::cout<<"fun\n";
}

int main()
{
    std::thread t1([](){
        fun();
    });
    t1.join();
}