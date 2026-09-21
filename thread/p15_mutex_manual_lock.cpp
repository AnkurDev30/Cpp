#include<iostream>
#include<thread>

std::mutex m;
int count=0;
void fun()
{
    m.lock();
        count++;
    m.unlock();
}

int main()
{
    std::thread t(fun);
    std::thread p(fun);

    t.join();
    p.join();
}