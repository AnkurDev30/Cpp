#include<iostream>

class base 
{
    public:
        virtual void fun()=0;
};
class derived : public base
{
    public:
    void fun() 
        {
            std::cout<<"hi\n";
        }

};

int main()
{
    base *p = new derived();

    p->fun();
}