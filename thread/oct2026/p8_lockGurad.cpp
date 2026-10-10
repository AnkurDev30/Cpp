#include<iostream>
#include<thread>
#include<mutex>
std::mutex m;
int count =0;
void fun()
{
    std::lock_guard<std::mutex>lock(m);
    count++;
}
int main()
{
    std::thread t1(fun);
    t1.join();
}
