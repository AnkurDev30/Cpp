#include<iostream>

class x 
{
    public:
        int *p=nullptr;
        x(int a)
        {
            p=new int (a);
        }
        x(x&& obj)
        {
            p=new int (*obj.p);
            obj.p=nullptr;
        }
        x& operator =(x&& obj)
        {
            delete p;
            p=new int (*obj.p);
            obj.p=nullptr;
            return *this;            
        }
        void display()
        {
            std::cout<<"*p = "<<*p<<std::endl;
        }
};
int main()
{
    x x1(8);

    x1.display();

    x x2(12);

    x2.display();

    x2=std::move(x1);
    x2.display();
}