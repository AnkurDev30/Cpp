/**
Print "Hello" using lambda.
Add two numbers using lambda.
Find maximum of two numbers.
Check even or odd.
Level 2
Capture one variable by value.
Capture one variable by reference.
Capture all variables by value.
Capture all variables by reference.
*/

#include<iostream>
#include<string>
int main(int argc,char*argv[])
{
    auto hello = []()
    {
        std::cout<<"hello by lambda\n";
    };
    hello();

    auto add = [](int a,int b)
    {
        std::cout<<"add : "<<a+b<<std::endl;
    };
    add(3,4);

    auto max=[](int a,int b)
    {
        int c = a>b?a:b;
        return c;
    };
    int maxNu = max(3,7);
    std::cout<<"max num = "<<maxNu<<std::endl;

    auto check=[](int a)
    {
        bool c = (a%2==0)?true:false;
        return c;
    };
    int num = std::stoi(argv[1]);
    bool evenOrOdd = check(num);
    if(evenOrOdd ==true) std::cout<<"even\n";
    else std::cout<<"odd\n";
    int p=std::stoi(argv[2]);

    auto captureVal = [p]()
    {
        std::cout<<"p value : "<<p<<std::endl;
    };
    captureVal();
    auto captureRef = [&p]()
    {
        p=p*3;
    };
    captureRef();
    std::cout<<"p val by refrence = "<<p<<std::endl;

    int x =std::stoi(argv[3]);

    auto allValue = [=]()
    {
        std::cout<<"1 "<<num<<std::endl;
        std::cout<<"2 "<<p<<std::endl;
        std::cout<<"3 "<<x<<std::endl;
    };
    allValue();

    auto allRefrence = [&]()
    {
        std::cout<<"allRefrence\n";
        num++;
        p++;
        x++;
    };
    allRefrence();
    std::cout<<"A "<<num<<std::endl;
    std::cout<<"B "<<p<<std::endl;
    std::cout<<"C "<<x<<std::endl;
}