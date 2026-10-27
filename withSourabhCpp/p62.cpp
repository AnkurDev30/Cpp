//object slicing :- base class object point to derived class


#include<iostream>

class engine 
{

    public:
        int x{10};
        virtual void fun()
        {
            std::cout<<"engine class\n"<<x<<std::endl;;
        }
};
class car : public engine 
{

    public:
        int x{20};
         void fun()
        {
            std::cout<<"car class\n"<<x<<std::endl;
        }
};

int main()
{
    car c1;
    engine b = c1;//object slicing , if base class object point derived 
    //class object so runtime polymorphishm not achive. 
    //solution :- create base class pointer
    b.fun();
}