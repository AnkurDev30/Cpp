//Factorial
#include<iostream>
void factorial(long long num)
{
    long long  num1=1;
    for(auto a =num;a>=1;a--)
    {
        num1= num1*a;
    }
    std::cout<<"Factorial of "<<num<<" = "<<num1<<std::endl;
}
int main()
{
    long long num;
    std::cout<<"enter number of calculate factorial\n";
    std::cin>>num;
    factorial(num);
}