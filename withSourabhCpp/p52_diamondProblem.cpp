#include<iostream>

/**
A-->B
       Band c-->D(A,B,C);
A-->C
*/


class A 
{
    public:
        void display()
        {
            std::cout<<"A display\n";
        }
        void make()
        {
            std::cout<<"A make\n";
        }
};
class B:virtual public A 
{
    public:
        
        void cake()
        {
            std::cout<<"B cake\n";
        }
};
class C:virtual public A 
{
    public:
        
        void lake()
        {
            std::cout<<"c lake\n";
        }
};
class D: public B,public C 
{
    public:
        void sake()
        {
            std::cout<<"D sake\n";
        }
};

int main()
{
    D d1;
    d1.cake();
    d1.lake();
    d1.sake();
    d1.display();
}