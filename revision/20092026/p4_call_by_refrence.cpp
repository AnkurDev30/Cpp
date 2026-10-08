#include<iostream>

void fun(int& a);
int main()
{
    int b=7;
    std::cout<<"before fun : "<<b<<std::endl;
    fun(b);
    std::cout<<"after fun : "<<b<<std::endl;

}
void fun(int& a)//passing function alias
{
    a++;//increment and effect in main fun
}
