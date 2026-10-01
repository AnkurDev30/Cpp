//30 sep 2026
#include<iostream>
class AbstractClass
{
    public:
        virtual void fun()=0;
        virtual~AbstractClass()
        {
            std::cout<<"AbstractClass des\n";
        }
};
class New:public AbstractClass
{
    public:
    void fun()
    {
        std::cout<<"fun\n";
    }
};

int main()
{
    AbstractClass *p =new New();
    p->fun();
}