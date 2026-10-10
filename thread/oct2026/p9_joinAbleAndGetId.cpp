#include<iostream>
#include<thread>

void fun()
{
    std::cout<<"hello\n";
}

int main()
{
    std::thread t1(fun);
    if(t1.joinable())
    {
        std::cout<<"id = "<<t1.get_id()<<std::endl;
        t1.join();
        
    }
}