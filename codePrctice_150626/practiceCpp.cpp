//data abstraction example.
#include<iostream>
class A 
{
    public:
        virtual void fun()=0;
};
class B:public A
{
    public:
        void fun()
        {
            std::cout<<"Derive fun\n";
        }
};
class sta
{
    public:
    static int a;
    static void show()
    {
        std::cout<<a<<std::endl;
    }
};
int sta::a=7;
int main()
{
    B b1;
    A *b=&b1;
    b->fun();

    //
    sta::a++;
    sta p,q,r;
    std::cout<<p.a<<std::endl;
    std::cout<<q.a<<std::endl;
    std::cout<<r.a<<std::endl;
    sta::a++;
    p.show()0;
    q.show()0;
    r.show()0;
}