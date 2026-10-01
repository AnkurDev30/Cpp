#include<iostream>

class calc
{
    private:
        float a,b;
        float result;
        float add();
        float sub();
        float mult();
        float div();
        void takeInput();
        void calc_Fun();
    public:
        void calculation();
};

void calc::calculation()
{
    calc_Fun();
}
void calc::takeInput()
{
    std::cout<<"enter a and b\n";
    std::cin>>a>>b;
}
void calc::calc_Fun()
{
    int a;
    takeInput();
    std::cout<<"select option\n";
    std::cout<<"1 for add\n";
    std::cout<<"2 for sub\n";
    std::cout<<"3 for mul\n";
    std::cout<<"4 for div\n";
    std::cin>>a;
    if(a==1)
    {
        result = add();
    }
    else if(a==2)
    {
        result = sub();
    }
    else if(a==3)
    {
        result = mult();
    }
    else if(a==4)
    {
        result = div();
    }
    else
    {
        std::cout<<"wrong option\n";
    }

    std::cout<<"result = "<<result<<std::endl;
}
float calc::add()
{
    return a+b;
}
float calc::sub()
{
    return a-b;
}
float calc::mult()
{
    return a*b;
}
float calc::div()
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        std::cout<<"error b should not be 0\nresult not correct\n";
        return 0;
    }
    
}
int main()
{
    calc obj1;
    obj1.calculation();
}

