#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
std::mutex m1;
int count=0;
void fun()
{
    m.lock();
        count++;
    m.unlock();
}
void fun2()
{

    std::lock_guard<std::mutex>f(m1);
    count++;

}
int main()
{

    std::thread t1(fun);
    t1.join();
    std::cout<<"count ="<<count<<std::endl;
    std::thread t2(fun2);
    t2.join();
    std::cout<<"count ="<<count<<std::endl;
}