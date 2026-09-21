#include<iostream>
#include<thread>
#include<chrono>
void fun()
{
    while(1)
    {
        std::cout<<"fun\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}
void fun2()
{
    while(1)
    {
        std::cout<<"fun2\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

int main()
{
    int x,y;
    std::thread t(fun);
    std::thread p(fun2);

    p.join();
    t.join();

    std::cout<<"completed\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
}