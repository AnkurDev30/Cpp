#include<iostream>

#include<thread>

class basic
{
    public:
        void fun()
        {
            std::cout<<"call from obj\n";
        }
};

int main()
{
    basic b1;
    std::thread t1([&b1]{
        b1.fun();
    });
    t1.join();
}