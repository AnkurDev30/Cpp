//
#include<iostream>
class shall
{
    public:
    int *p;
    shall(int data)
    {
        p=new int(data);
    }
    shall(shall &q)
    {
        int a=*q.p;
        this->p=new int(a);
    }
    void display()
    {
        std::cout<<"p = "<<*p<<std::endl;
    }
    void set(int m)
    {
        *p=m;
    }
};
int main()
{
    shall t(3);
    t.display();
    shall s(t);
    s.display();
    s.set(8);
    t.display();
    s.display();
}