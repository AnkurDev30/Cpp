//static demo program 2
#include<iostream>
class Stu
{

    public:
        static int b;
        void fun()
        {
            b++;
        }
};
 int Stu:: b=5;
 int main()
 {
    Stu S1;
    S1.fun();
    std::cout<<"static var "<<S1.b<<std::endl;
    S1.fun();
    std::cout<<"static var "<<S1.b<<std::endl;
 }