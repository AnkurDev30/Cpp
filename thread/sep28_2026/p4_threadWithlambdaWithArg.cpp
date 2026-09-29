//lmabda with  thread with argument

#include<iostream>
#include<thread>

int main()
{

    std::thread t1([](int x){
        std::cout<<x<<std::endl;
    },100);

    t1.join();
}