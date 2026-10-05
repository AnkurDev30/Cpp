//method chaining

#include<iostream>


class thisDemo3
{

    private:
        int a, b;
    public:
        thisDemo3& readAB()
        {
            std::cout<<"readAB\n";
            std::cout<<"enter a and b\n";
            std::cin>>a>>b;

            return *this;
        }
        thisDemo3&  ProcessAB()
        {
            std::cout<<"ProcessAB\n";
            a=a*5;
            b=b*10;
            return *this;
        }
        thisDemo3& displayAB()
        {
            std::cout<<"displayAB\n";
            std::cout<<"a = "<<a<<" b = "<<b<<std::endl;
            return *this;
        }

};

int main()
{
    thisDemo3 t1;
    t1.readAB().ProcessAB().displayAB();


}