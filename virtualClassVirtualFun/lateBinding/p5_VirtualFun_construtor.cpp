#include<iostream>

class base 
{
    private:
        int i;
    public:
        base (int ii)
        {
            i=ii;
        }
        virtual void fun1()
        {
            std::cout<<"i value = "<<i<<std::endl;
        }
};
class derived : public base 
{
    private:
        int j;
    public:
        derived(int ii,int jj):base(ii)
        {
            j=jj;
        }
        void fun1()
        {
            std::cout<<"j value : "<<j<<std::endl;
        }
};

int main()
{
    base b(10);
    derived d(15,20);

    base *ptr1=&b;

    ptr1->fun1();//10;

    base *ptr2 =&d;
    ptr2->fun1();//20;

    base &ref1 = b;
    ref1.fun1();//10

    base &ref2 = d;
    ref2.fun1();//20

    b=d;
    b.fun1();//15
}