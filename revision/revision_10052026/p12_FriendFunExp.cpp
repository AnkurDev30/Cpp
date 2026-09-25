/*
🧱 FRIEND FUNCTION / FRIEND CLASS
12. Bank Balance Transfer
Concepts:
friend function
private access
*/
#include<iostream>
class frienFunExp
{
    private:
        int a;
        friend void readAVar(frienFunExp &obj);
    public:
        frienFunExp()
        {
            std::cout<<"enter num\n";
            std::cin>>a;
        }
};
 void readAVar(frienFunExp &obj)
 {
    int b = obj.a;
    std::cout<<"private var value : "<<b<<std::endl;
 }
int main()
{
    frienFunExp obj2;
    readAVar(obj2);
    return 0;
}