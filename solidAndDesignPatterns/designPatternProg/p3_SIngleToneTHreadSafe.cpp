#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
class singtone
{
    private:
        singtone()
        {

        }
    public:
        singtone(singtone& obj)=delete;
        singtone& operator = (singtone& obj)=delete;
        static singtone& getInstanceID()
        {
            static singtone obj;
            return obj;
        }
        void display()
        {
            //std::cout<<"address : "<<this<<std::endl;
        }
};
void task1()
{
    m.lock();
    singtone& obj = singtone::getInstanceID();
    std::cout<<"address : "<<&obj<<std::endl;
    m.unlock();
}

int main()
{
    std::thread t1(task1);
    std::thread t2(task1);
    std::thread t3(task1);

    t1.join();
    t2.join();
    t3.join();
}