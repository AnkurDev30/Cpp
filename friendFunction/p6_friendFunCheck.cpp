// we are checking friend function have ability to read all members are not.

#include<iostream>
class checkFrd
{
    friend void printFun(checkFrd c1);
    private:
        int a;
        void helloFunPrivatecheckFrd()
        {
            std::cout<<"hello fun private\n";
        }
    public:
        int b;
        void publicFun()
        {
            std::cout<<"public fun\n";
        }    
    protected:
        int c;
        void protectedFun()
        {
            std::cout<<"protected fun\n";
        } 
};
void printFun(checkFrd c1)
{
    c1.a=5;
    c1.b=6;
    c1.c=10;
    c1.helloFunPrivatecheckFrd();
    c1.publicFun();
    c1.protectedFun();
}
int main()
{
    checkFrd c2;
    printFun(c2);
}