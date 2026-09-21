#include<iostream>
#include<thread>
#include<chrono>
void fun(int x)
{
    if(x==1)
    {
        std::cout<<x<<std::endl;
        
    }
    else
    {
        std::cout<<"hi"<<std::endl;
        
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
int main()
{
    int y=0;
    y++;
    std::thread t(fun,y);
    y++;
    std::thread p(fun,y);

    t.join();
    p.join();
}