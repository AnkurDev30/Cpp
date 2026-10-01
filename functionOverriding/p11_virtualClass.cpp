//if inheritence created twice then diamand problem occure 
//with the help of virtual class we can solve it.

#include<iostream>

 class one
{
    public:
        one()
        {
            std::cout<<"one c\n";
        }
        ~one()
        {
            std::cout<<"one d\n";
        }
};

class  two :public virtual one
{
    public:
        two()
        {
            std::cout<<"two c\n";
        }
        ~two()
        {
            std::cout<<"two d\n";
        }
};
class  three :public virtual one
{
    public:
        three()
        {
            std::cout<<"three c\n";
        }
        ~three()
        {
            std::cout<<"three d\n";
        }
};
class  four :public two,three
{
    public:
        four()
        {
            std::cout<<"four c\n";
        }
        ~four()
        {
            std::cout<<"four d\n";
        }
};
int main()
{
    one o;
    two t;
    three th;
    four f;
}