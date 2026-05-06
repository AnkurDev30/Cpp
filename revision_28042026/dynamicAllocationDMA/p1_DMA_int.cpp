/*
🧱 Problem 1 — Dynamic Integer
Requirements:
Create dynamic integer using new
Take value from user
Print value
Release memory properly

👉 Focus:

new
delete
pointer basics
*/

#include<iostream>
class dmaInt
{
    public:
        int *a;
        dmaInt(int p)
        {
            a=new int(sizeof(int));
            a=&p;
        }
        void printValue()
        {
            std::cout<<"value of *a ="<<*a<<std::endl;
        }
        ~dmaInt()
        {
            delete a;
        }
};

int main()
{
    int q;
    std::cout<<"enter q value"<<std::endl;
    std::cin>>q;

    dmaInt obj(q);
    obj.printValue();
}