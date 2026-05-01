//Function with default value

#include<iostream>
class defaultArgumentFun
{
    public:
        void addFun(int a=0,int b=0,int c=0);
        void subFun(int a, int b=0);
        void mulFun(int a=1,int b=1);
        void divFun(int a, int b=1);
};
void defaultArgumentFun::addFun(int a,int b,int c)
{
    std::cout<<"addition ="<<a+b+c<<std::endl;
}
void defaultArgumentFun::subFun(int a, int b)
{
    std::cout<<"substraction ="<<a-b<<std::endl;
}
void defaultArgumentFun::mulFun(int a,int b)
{
    std::cout<<"multiplication ="<<a*b<<std::endl;
}
void defaultArgumentFun::divFun(int a, int b)
{
    std::cout<<"division ="<<a/b<<std::endl;
}
int main()
{
    defaultArgumentFun obj;
    obj.addFun();
    obj.subFun(2);
    obj.mulFun();
    obj.divFun(3);
}