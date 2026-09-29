//thread with arguments

#include<iostream>
#include<thread>
void fun(int a)
{
    std::cout<<"a value fun = "<<a<<std::endl;
}
void fun2(int a)
{
    std::cout<<"a value fun2 = "<<a<<std::endl;
}
int main()
{
    int a=9;
    std::thread t1(fun,a);
    t1.join();

     a=11;
    std::thread t2(fun2,a);
    t2.join();

}