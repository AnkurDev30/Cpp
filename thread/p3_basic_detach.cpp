#include<iostream>
#include<thread>
#include <chrono>
void fun()
{
    for(int i=0;i<5;i++)
    {
        std::cout<<"hello\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}
int main()
{
    std::thread t(fun);

  
    t.detach();
    for(int i=0;i<5;i++)
    {
        std::cout<<"main pgm\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
      
    
}