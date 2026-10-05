//Swap two values using pointer and reference

#include<iostream>

class swap 
{
    private:
        int a;
        int b;
    public:
        void swapFun()
        {
            std::cout<<"enter a and b\n";
            std::cin>>a>>b;
            std::cout<<"swap by pointer\n";
            swapByPointer(&a,&b);
            std::cout<<"new values swap by pointer : a = "<<a<<" b = "<<b<<std::endl;
            std::cout<<"swap by refrence\n";
            swapByRefrence(a,b);
            std::cout<<"new values swap by refrence : a = "<<a<<" b = "<<b<<std::endl;

        }
        void swapByPointer(int *p,int *q)
        {
            int temp =*p;
            *p =*q;
            *q=temp;
        }
        void swapByRefrence(int &p,int &q)
        {
            int temp =p;
            p =q;
            q=temp;
        }
};

int main()
{
    swap s1;
    s1.swapFun();
}