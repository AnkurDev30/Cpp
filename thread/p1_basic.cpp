#include<iostream>
#include<thread>

void fun()
{
    std::cout<<"hello\n";
}
int main()
{
    std::thread t(fun);

    t.join();
}