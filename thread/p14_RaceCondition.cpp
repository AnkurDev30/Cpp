#include<thread>
#include<chrono>
#include<iostream>


int count=0;
void fun()
{
    std::cout<<"hi\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    count++;
}

int main()
{


    std::thread t(fun);
    std::thread p(fun);


    
    t.join();
    p.join();

    std::cout<<"count = "<<count<<" id -"<<std::this_thread::get_id<<std::endl;
}