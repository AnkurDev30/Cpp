#include<iostream>
#include<thread>

int main()
{
    int x=8;
    std::thread t([=](){
        std::cout<<x<<std::endl;
    });
   // t.join();
   t.detach();
}