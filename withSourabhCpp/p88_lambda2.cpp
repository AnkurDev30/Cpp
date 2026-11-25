#include<iostream>


void fun()
{

    [](){
    std::cout<<"hello\n";
    }();
    
    std::cout<<"hi\n";
}
int main()
{

    int a=10;
    int b=20;
    int c=40;;

    auto run = [a,b]()
    {
        std::cout<<a+b<<std::endl;
    };
    run();


    run();

    fun();

    
}