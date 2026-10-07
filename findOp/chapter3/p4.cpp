#include<iostream>
using namespace std;
int main()
{
    //void fun2() //this is solution
    void fun1();
    void fun2();
    fun1();
    return 0;
}
void fun1()
{
    fun2();//give error becuase f1 not know the fun2
    cout<<endl<<"hi Hello"<<endl;
    return 0;
}
void fun2()
{
    cout<<endl<<"to you"<<endl;
}