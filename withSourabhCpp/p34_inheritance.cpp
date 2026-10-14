#include<iostream>
class Ball 
{
    public:
        int a{8};
};
class Rubber : private Ball
{
    public:
        int b=a;
        void display()
        {
            std::cout<<b<<std::endl;
        }
};
class rohan : public Rubber
{
    public:
        int c=a;
        int d =b;
        void dev ()
        {
            std::cout<<"dev "<<c<<std::endl;
            std::cout<<"dev "<<d<<std::endl;
        }
};
int main()
{
    Rubber r1;
    r1.display();
    rohan r;
    r.dev();
}