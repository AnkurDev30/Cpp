//copt to assigment

#include<iostream>

class Test
{
    public:
        int a;
        int b;
        int c;
    Test(int a,int b,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Test()
    {
        a=0;
        b=0;
        c=0;
    }
   // Test& operator =(Test t1)
   void operator =(Test t1)
    {
        this->a=t1.a ;
        this->b=t1.b ;
        this->c=t1.c ;
       // return *this;
    }
};
int main()
{
    Test T1(15,27,311);
    Test Tnew;

    std::cout<<"a ="<<Tnew.a<<" b= "<<Tnew.b<<" c = "<<Tnew.c<<std::endl;
    std::cout<<"a ="<<T1.a<<" b= "<<T1.b<<" c = "<<T1.c<<std::endl;
    
    Tnew=T1;
    
    std::cout<<"a ="<<Tnew.a<<" b= "<<Tnew.b<<" c = "<<Tnew.c<<std::endl;
    std::cout<<"a ="<<T1.a<<" b= "<<T1.b<<" c = "<<T1.c<<std::endl;
}