#include<iostream>
class base 
{
    private:
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
    public:
        void callfun()
        {
            fun();
        }
};
class derived :public base
{
    public:
        void fun()
        {
            std::cout<<"hi\n";
        }
};
int main()
{
    derived d;
    d.callfun();
}