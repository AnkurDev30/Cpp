//lambda with class members.
#include<iostream>
class IamClass
{
    public:
        int a;
        void read();
        void display();
};
void IamClass::read()
{
    std::cout<<"enter value\n";
    std::cin>>a;
}
void IamClass::display()
{
    std::cout<<"a = : "<<a<<std::endl;
}
int main()
{
    IamClass i1;
    i1.read();
    i1.display();

    [&i1]()
    {
        i1.read();
        i1.display();
    }();
}