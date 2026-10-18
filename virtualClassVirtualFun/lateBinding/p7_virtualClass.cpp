#include<iostream>

class B 
{
    public:
        void display()
        {
            std::cout<<"hello\n";
        }
        void pack()
        {
            std::cout<<"pack\n";
        }
};
class C :virtual public B 
{
    public:
        void Cpack()
        {
            std::cout<<"C_pack\n";
        }
};
class D :virtual public B 
{
    public:
        void Dpack()
        {
            std::cout<<"D_pack\n";
        }
};
class E:public C, public D 
{
    public:
        void make()
        {
            std::cout<<"make\n";
        }
};

int main()
{
    E e1;

    e1.make();

    e1.Dpack();
    e1.Cpack();
    e1.display();//for that we need to make virtual class
}