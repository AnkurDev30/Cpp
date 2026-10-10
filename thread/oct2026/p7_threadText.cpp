#include<iostream>
#include<thread>
void fun()
{
    std::cout<<"fun\n";
}
int main()
{
    std::thread t(fun);

}