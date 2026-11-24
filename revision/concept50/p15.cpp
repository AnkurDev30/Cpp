//Create an abstract class Shape and implement Circle, Rectangle and Triangle.

#include<iostream>

class Shape 
{
    public:
        virtual void Area() = 0;
        ~Shape()
        {
            std::cout<<"destructor shape\n";
        }
};

class Circle: public Shape
{
    public:
        float AreaVar{0};
        float redies{0};
        void Area()
        {
            std::cout<<"enter redies for circle area\n";
            std::cin>>redies;

            AreaVar = 3.14*redies*redies;

            std::cout<<"Area of circle= "<<AreaVar<<std::endl;
        }
};
class Ractangle: public Shape
{
    public:
        float AreaVar{0};
        float length{0};
        float width{0};
        void Area()
        {
            std::cout<<"enter length for Ractangle area\n";
            std::cin>>length;
            std::cout<<"enter width for Ractangle area\n";
            std::cin>>width;
            AreaVar = length*width;

            std::cout<<"Area of Ractangle= "<<AreaVar<<std::endl;
        }
};

class Triangle: public Shape
{
    public:
        float AreaVar{0};
        float base{0};
        float height{0};
        void Area()
        {
            std::cout<<"enter base for Triangle area\n";
            std::cin>>base;
            std::cout<<"enter height for Triangle area\n";
            std::cin>>height;
            AreaVar = ((base*height)/2);

            std::cout<<"Area of Triangle= "<<AreaVar<<std::endl;
        }
};

int main()
{
    Shape *p = new Circle();
    p->Area();
    p = new Ractangle();
    p->Area();
    p = new Triangle();
    p->Area();

    delete p;
    p=nullptr;
}