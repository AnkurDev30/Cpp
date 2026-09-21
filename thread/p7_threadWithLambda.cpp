//thread with lambda.

#include<iostream>
#include<thread>
int main()
{
    std::thread t([](){
        std::cout<<"hello\n";
    });

    t.join();
}
