/*construtor vs funtion*/


#include<iostream>
class AB 
{

    public:
        AB()
        {
            std::cout<<"i am construtor\n";
        }
        void fun()
        {
            std::cout<<"hello i am fun\n";
        }
};

int main()
{

    AB A;
    A.fun();
    A.fun();
    A.fun();
    A.fun();
}

