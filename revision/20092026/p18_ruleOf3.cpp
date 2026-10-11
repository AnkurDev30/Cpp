#include<iostream>

class rule3
{
    public:
        int *p=nullptr;
        rule3(int b)
        {
            p=new int(b);
        }
        rule3(rule3& obj)
        {
            p=new int (*obj.p);
        }
        rule3& operator=(rule3& obj)
        {
            delete p;
            p=new int(*obj.p);
            return *this;
        }
        ~rule3()
        {
            delete p;
        }
        void display()
        {
            std::cout<<*p<<std::endl;
        }
};
int main()
{
    rule3 r1(5);
    r1.display();
    rule3 r2(11);
    r2.display();
    r2=r1;
    r2.display();
}