#include<iostream>
#include<thread>
#include<mutex>

int count = 0;
std::mutex m;

void funIncrease()
{
    for(int i=0;i<10;i++)
    {
        m.lock();
            count++;
        m.unlock();
    }
}
int main()
{
    std::thread t1(funIncrease);
    std::thread t2(funIncrease);
    t1.join();
    t2.join();
    std::cout<<count<<std::endl;

}

