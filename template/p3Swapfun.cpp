/**
🧱 3. Generic Swap Function
Requirements:

Create template function:

swapData()

Swap:

integers
float values
characters
*/

#include<iostream>
template <typename a>
void fun(a a1,a b1 )
{
    a temp  =   a1;
    a1      =   b1;
    b1      =   temp;
    std::cout<<"first num = "<<a1<<std::endl;
    std::cout<<"second num = "<<b1<<std::endl;
}
int main()
{
    fun(3,5);
}