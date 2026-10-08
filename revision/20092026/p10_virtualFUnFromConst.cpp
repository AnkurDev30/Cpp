#include<iostream>
class a
{
    public:
       
        
    virtual void fun()
    {
        std::cout<<"fun\n";
    }
        
};
class b :public a 
{
    public:
        b()
        {
            a *p = this;
            p->fun();
        }
        void fun()
        {
            std::cout<<"hello\n";
        }
};
int main()
{
    b b1;
}