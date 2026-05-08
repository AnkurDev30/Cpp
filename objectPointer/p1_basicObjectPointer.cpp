/*
🧱 1. Basic Object Pointer
Requirements:

Create class:

integer variable
input function
display function

Create:

normal object
object pointer

Access members using:
*/

#include<iostream>
class create 
{
    public:
        int a;
        void input()
        {
            std::cout<<"enter var\n";
            std::cin>>a;
        }
        void output()
        {
            std::cout<<"a = "<<a<<std::endl;
        }
};

int main()
{
    create object;
    object.input();
    object.output();

    create *p =&object;
    p->input();
    p->output();
}