#include<iostream>
template <typename t>

class Abc
{
    public:
    t a,b;
    Abc(t a,t b)
    {
        this->a=a;
        this->b = b;
    }
    void display()
    {
        std::cout<<static_cast<t>(a)<<" "<<static_cast<t>(b)<<std::endl;
    }
};
int main()
{
    Abc<int> A1(37,38);

    A1.display();
    Abc<char> A2('A','B');
    A2.display();
}

