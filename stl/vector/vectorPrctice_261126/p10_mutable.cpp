//mutable demostration

#include<iostream>
#include<vector>

class mutablecheck 
{
    public:
        int a =10;
        mutable int b =20;
        void read() const
        {
            std::cout<<"a = "<<a<<std::endl;
            std::cout<<"b = "<<b<<std::endl;
            b++;
            std::cout<<"b = "<<b<<std::endl;
        }
};
int main()
{

    mutablecheck m1;
  

    m1.read();
}