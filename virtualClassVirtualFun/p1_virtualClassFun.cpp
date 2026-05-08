// virtual class error gentated 
// class A --> classB  classA-->classC
// classD -->classB,classC

// but this will generate error because class A 
// creates two times

#include<iostream>
class A 
{
    public:
        void classAfun()
        {
            std::cout<<"class A"<<std::endl;
        }
};
class B : public virtual  A
{
    public:
        void classBfun()
        {
            std::cout<<"class B"<<std::endl;
        }
};
class C : public  virtual A
{
    public:
        void classCfun()
        {
            std::cout<<"class c"<<std::endl;
        }
};
class D : public B,public  C
{
    public:
        void classDfun()
        {
            std::cout<<"class D"<<std::endl;
        }
};
int main()
{
    D d1;
    d1.classBfun();
    d1.classAfun();
}