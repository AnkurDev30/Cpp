/*
🧱 2. Pointer Access vs Normal Access
Requirements:

Create class:

name
age

Access data using:

obj.
ptr->

Print both.

*/
#include<iostream>
class goal
{
    public:
        int p;
        void in()
        {
            std::cout<<"enter var\n";
            std::cin>>p;
        }
        void out()
        {
            std::cout<<"p = "<<p<<std::endl;
        }
};
int main()
{
    goal g1;
    goal *p1 = &g1;
    p1->in();
    p1->out();

    g1.out();
}