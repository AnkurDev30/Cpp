//parametrized constructor 

#include<iostream>
class c1
{
    protected:
    int b;
    public:
     c1(int a)
     {
        b=a;
     }
};
class c2:public c1
{

    int p,q;
    public:
        c2(int x,int y):c1(  x)
        {
            p=x;
            q=y;
        }
        void fun()
        {
            std::cout<<b+p+q<<std::endl;
        }
};
int main()
{
    c2 cObj(6,6);
    cObj.fun();
}