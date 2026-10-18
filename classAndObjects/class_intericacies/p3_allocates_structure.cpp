#include<iostream>

struct x
{
    int x1;
};
int main()
{
    x *p=new x();

    p->x1=10;

    std::cout<<p->x1<<std::endl;
}