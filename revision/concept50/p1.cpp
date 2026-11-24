//Swap two numbers using pointers without a third variable.

#include<iostream>

class swapViaPointer 
{
    private:
        int a,b;
    public:
        swapViaPointer()
        {
            std::cout<<"enter first number\n";
            std::cin>>a;
            std::cout<<"enter second number\n";
            std::cin>>b;         
        }    
        void print()
        {
            std::cout<<"a = "<<a<<" b = "<<b<<std::endl;
        }
        void swapfun(int *a,int *b)
        {
            *a = *a+*b;
            *b = *a-*b;
            *a = *a - *b;
        }
        void swapFuntion()
        {
            std::cout<<"before swap : \n";
            print();
            swapfun(&a,&b);
            std::cout<<"after swap : \n";
            print();
        }
};
int main()
{
    swapViaPointer s1;
    s1.swapFuntion();
}