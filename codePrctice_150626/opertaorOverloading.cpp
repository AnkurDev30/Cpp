#include<iostream>
class op
{
    public:
    int a,b;
    op(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    op operator +(op &op1)
    {
        op op3;
        op3.a=this->a+op1.a;
        op3.b=this->b+op1.b;
        return op3;
    }
    void display()
    {
        std::cout<<"a="<<a<<" "<<"b="<<b<<std::endl;
    }
    op()
    {

    }
};
int main()
{
    op t(3,4),s(7,8);
    op z;
    z=t+s;
    z.display();
}