//destructor in cpp
#include<iostream>
class a
{
    public:
        ~a()
        {
            std::cout<<"Delete\n";
        }
};
class B
{
    public:
        int *a;
        B()
        {
            std::cout<<"construtor call\n";
            a=new int;
        }
        void read()
        {
            std::cout<<"enter a value\n";
            std::cin>>*a;
        }
        ~B()
        {
            std::cout<<"de-construtor call\n";
            delete a;
            
        }
};
class base
{
    public:
        base()
        {
            std::cout<<"hi const base\n";
        }
        virtual~ base()
        {
            std::cout<<" deconst base\n";
        }
};
class derive:public base
{
    public:
        derive()
        {
            std::cout<<"hi const derive\n";
        }
        ~derive()
        {
            std::cout<<" deconst derive\n";
        }
};
int main()
{
    //a a1;
    //B b1;
    //b1.read();
    base *p =new derive;
    delete p;
}