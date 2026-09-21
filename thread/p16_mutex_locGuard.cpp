#include<iostream>
#include<thread>

#include<mutex>
std::mutex m;

int count = 0;
void fun()
{
    std::lock_guard<std::mutex>lock(m);
    count++;
    std::cout<<count<<std::endl;
}
int main()
{
    std::thread t(fun);
    std::thread p(fun);

    t.join();
    p.join();
}