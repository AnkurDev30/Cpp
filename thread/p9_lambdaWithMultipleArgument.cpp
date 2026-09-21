#include<iostream>
#include<thread>

int main()
{

    int a=100,b=200;
    std::thread t([](int x,int y)
                {
                    std::cout<<x<<y<<std::endl;
                },a,b);
                t.join();
}