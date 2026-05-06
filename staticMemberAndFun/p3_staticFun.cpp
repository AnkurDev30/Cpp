//static fun
#include<iostream>

class Stu
{
    public:
        static int a;
        int b;
        static void printF()
        {
            std::cout<<a<<std::endl;
            a++;
            std::cout<<a<<std::endl;
        }
};
int Stu::a=9;

int main()
{
    Stu s1;
    Stu::printF();
    s1.printF();
}