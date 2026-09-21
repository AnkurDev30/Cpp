#include<iostream>
#include<thread>

int main()
{
    int y=30;

    std::thread t([&](){
        y++;
    });

   
    std::cout<<y<<std::endl;
    t.join();
}