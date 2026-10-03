//composition:- in composition we make relationship b/w two other class or structure
#include<iostream>
class B //class first
{
    public:
        void Afun()
        {
            std::cout<<"cde\n";
        }
};
class A //class second
{
    private:
    B b1;
    public:
    void Afun();
};

void A::Afun()
{
    b1.Afun();
    std::cout<<"abc\n";
}

int main()
{
    A a1;
    a1.Afun();
}
