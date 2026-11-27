#include<iostream>

class aba 
{
    private:
        int a,b;
    public:
        aba(int x,int y): a(x),b(y){}
        aba& add()
        {
            std::cout<<"Add : "<<a+b<<std::endl;
            return *this;
        }
        aba& sub()
        {
            std::cout<<"Sub : "<<a-b<<std::endl;
            return *this;
        }
        aba& pro()
        {
            std::cout<<"Pro : "<<a*b<<std::endl;
            return *this;
        }
        aba& div()
        {
            std::cout<<"Div : "<<a/b<<std::endl;
            return *this;
        }
};
int main()
{
    aba ab1(3,2);

    ab1.add().sub().pro().div();
}