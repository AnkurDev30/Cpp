#include<iostream>
#include<thread>
#include<list>
#include<chrono>
void fun(int x)
{
    std::cout<<"hello\n"<<x<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(x));
}
void fun2(int x)
{
    std::cout<<"hye\n"<<x<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(x));
}
int main()
{
    std::thread t(fun,1000);
    std::thread m(fun2,2000);

    t.join();
    m.join();
}