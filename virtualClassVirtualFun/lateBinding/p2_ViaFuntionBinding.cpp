#include<iostream>

class Area 
{
    public:
        virtual void area(int leng =0 ,int width = 0,int radies=0)
        {
            std::cout<<"virtual\n";
        }
};

class Rac:public Area 
{
    public:
        void area(int leng =0 ,int width = 0,int radies=0)
        {
            float area = leng*width;
            std::cout<<"area of ractangle = "<<area<<std::endl;
        }
};
class Circle:public Area 
{
    public:
        void area(int leng =0 ,int width = 0,int radies=0)
        {
            float area = 3.14*radies*radies;
            std::cout<<"area of circle = "<<area<<std::endl;
        }
};

void fun(Area *A,int leng =0 ,int width = 0,int radies=0)
{
    A->area(leng,width,radies);
}
int main()
{
    Rac r1;
    fun(&r1,10,7);
    Circle c1;
    fun(&c1,0,0,12);
}