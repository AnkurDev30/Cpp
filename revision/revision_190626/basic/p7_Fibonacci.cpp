//Fibonacci series
#include<iostream>
void FibonacciSeries(int steps)
{
    int a=1,b=1;
    int sum =0;

    std::cout<<a<<" , "<<b<<" , ";
    for(auto i=0;i<steps;i++)
    {
        sum=a+b;
        std::cout<<sum<<" , ";
        a=b;
        b=sum;
    }
    std::cout<<std::endl;
}
int main()
{
    int steps;
    std::cout<<"enter steps\n";
    std::cin>>steps;
    FibonacciSeries(steps);
}