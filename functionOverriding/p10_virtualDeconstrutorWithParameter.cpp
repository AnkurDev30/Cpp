//30sep 2026

#include<iostream>
class B 
{
    public:
        int x;
        B(int x){
            this->x = x;
            std::cout<<"base class constructor\n";
        }
        virtual~B()
        {
            std::cout<<"base class De constructor\n";
        }
        
};
class C:public B  
{
    public:
        int x;
        C(int x):B(x){
            std::cout<<"child class constructor\n";
        }
        ~C()
        {
            std::cout<<"child class De constructor\n";
        }
        
};
int main()
{
    B *b1=new C(12);
    delete b1;
}