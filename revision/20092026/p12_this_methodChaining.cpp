#include<iostream>
class methodChaining
{
    public:
        methodChaining& fun1()
        {
            std::cout<<"good morning\n";
            return *this;
        }
        methodChaining& fun2()
        {
            std::cout<<"how are you?\n";
            return *this;
        }
        methodChaining& fun3()
        {
            std::cout<<"bye\n";
            return *this;
        }
};
int main()
{
    methodChaining obj;
    obj.fun1().fun2().fun3();
}