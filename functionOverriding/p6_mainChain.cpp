#include<iostream>

class methodCHain
{

    public:
        methodCHain& fun()
        {
            std::cout<<"hello\n";
            return *this;
        }
        methodCHain& fun2()
        {
            std::cout<<"hi\n";
            return *this;
        }
        methodCHain& fun3()
        {
            std::cout<<"bye\n";
            return *this;
        }
};

int main()
{
    methodCHain m1;

    m1.fun().fun2().fun3();
}