#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
std::mutex m;
int count =0;
bool ready = false;
void consumer()
{
    m.lock();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
        count++;
        if(ready == true)
        {
            ready=false;
            std::cout<<"count become zero\n";
        }
    m.unlock();
}
void producer()
{
     m.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        ready=false;
        if(count==100)
        {
            count =0;
            ready=true;
            std::cout<<"ready become false\n";
        }
    m.unlock();   
}
int main()
{

    while(1)
    {
        std::cout<<"count = "<<count<<std::endl;
        std::thread t1(consumer);
        std::thread t2(producer);
        t1.join();
        t2.join();
    }


}