//thread 1
#include<iostream>
#include<thread>
void fun()
{
    std::cout<<"hello\n";
}
void fun2()
{
    std::cout<<"hi\n";
}
int main()
{

    std::thread t1(fun);
    std::thread t2(fun2);

    t1.join();
    t2.join();
}