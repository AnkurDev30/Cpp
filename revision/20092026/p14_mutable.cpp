//with the help of mutable we can modify the data members inside the const funtions
//but data member function should not be static refrence and const

#include<iostream>

class mutableCheck
{
    public:
        int a{20};
        mutable int b{200};
        void display()
        {
            std::cout<<"a = "<<a<<" "<<"b = "<<b<<std::endl;
            std::cout<<"try to update a, but a not mutable\n";
           
        }
        void modify()const
        {
            b=b*a;
             //a=a*10;
        }
};
int main()
{
    mutableCheck m1;
    std::cout<<"before update\n";
    m1.display();
    m1.modify();
    std::cout<<"before update\n";
    m1.display();
}