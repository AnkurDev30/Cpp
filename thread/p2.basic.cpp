#include<iostream>
#include<thread>
void fun()
{
    std::cout<<"hello\n";
}
void fun2()
{
    std::cout<<"hye\n";
}
int main()
{
    std::thread t(fun);

    std::cout<<"main fun wait\n";

    t.join();

    std::cout<<"main fun start\n";

    std::thread m(fun2);

    std::cout<<"main fun wait\n";
    m.join();
    std::cout<<"main fun start\n";


}