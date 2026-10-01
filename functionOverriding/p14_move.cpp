//30 sep 2026

#include<iostream>

class A 
{
    public:
        int *data;
        A (int a)
        {
            data =new int(a);
        }
        ~A()
        {
            delete data;
        }
        //move construtor
        A(A&&obj)
        {
            data =new int(*obj.data);
            obj.data = nullptr;
        }
        A& operator=(A&&obj)
        {
            delete data;
            data =new int(*obj.data);
            obj.data = nullptr;
            return *this;
        }
        void fun()
        {
            std::cout<<"data = "<<*data<<std::endl;
        }
};

int main()
{
    A a1(5);
    A a2=std::move(a1);
    a2.fun();
}