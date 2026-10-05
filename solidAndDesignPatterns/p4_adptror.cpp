#include<iostream>

class uSB
{
    public:

        virtual void fun()
        {

        }
};
class oldCharger
{
    public:
        void fun()
        {
            std::cout<<"old charger\n";
        }
};

class interface:public uSB
{
    private:
        oldCharger &o;
    public:
        interface(oldCharger &o1):o(o1){}

        void fun()
        {
            o.fun();
        }
};

int main()
{
    oldCharger o1;
    interface i(o1);
    uSB *u = &i;
    u->fun();
}