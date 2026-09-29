//thread with lambda

#include<iostream>
#include<thread>

/*void fun()
{
    std::cout<<"fun \n";
}
void fun2()
{
    std::cout<<"fun 2\n";
}*/

int main()
{
    int a=22;
    std::thread t1([=](){
        std::cout<<"value = "<<a<<std::endl;
    });

    std::thread t2([&](){
        a++;
        std::cout<<"value = "<<a<<std::endl;
    });

    t1.join();
    t2.join();
    std::cout<<a<<std::endl;
}