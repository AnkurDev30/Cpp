//adaptor

#include<iostream>

class target
{
    public:
        virtual void fun()
        {

        }
};
class oldData
{
    public:
        void fun()
        {
            std::cout<<"its old interface\n";
        }
};
class adaptor:public target
{
    private:
        oldData o;
    public:
        void fun()
        {
            o.fun();
        }
};
int main()
{
    target *p=new adaptor();
    p->fun();
}