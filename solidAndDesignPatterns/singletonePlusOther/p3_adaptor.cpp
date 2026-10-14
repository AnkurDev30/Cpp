#include<iostream>
#include<memory>
class target
{
    public:
        virtual void fun()
        {

        }
        virtual ~target()=default;
};

class oldIntf 
{
    public:
        void old_funtion()
        {
            std::cout<<"i am old fun\n";
        }
};
class adaptor:public target
{
    private:
        oldIntf o;
    public:
        
        void fun()
        {
            o.old_funtion();
        }
};
int main()
{
    target *p =new adaptor();
    p->fun();
}