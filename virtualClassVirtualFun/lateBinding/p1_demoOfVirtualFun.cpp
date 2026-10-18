#include<iostream>

class Shape 
{
    public:
        virtual void draw()
        {
            std::cout<<"in shape class\n";
        }
};
class Circle:public Shape 
{
    public:
        void draw()
        {
            std::cout<<"in circle class\n";
        }       
};
class Ractangle:public Shape 
{
    public:
        void draw()
        {
            std::cout<<"in ractangle class\n";
        }       
};
int main()
{
    Shape s1;
    s1.draw();

    Circle c1,c2,c3;
    Ractangle r1,r2,r3;

    Shape *pS2[] = {&c1,&r1,&c2,&r2,&c3,&r3};

    for(int i=0;i<6;i++)
    {
        pS2[i]->draw();
    }
}