//a class should behave like valid  replacement for 
// its parent class

#include <iostream>
class bird
{
    public:
        virtual void fly()
        {

        }
};
class sparrow:public bird
{
    public:
        void fly()
        {
            std::cout<<"sparrow can fly\n";
        }
};
class crow : public bird
{
    public:
        void fly()
        {
            std::cout<<"crow can fly\n";
        }
};
class pangwin : public bird
{
    public:
        void fly()
        {
            throw std::runtime_error("pangwin cant fly\n");
        }
};

int main()
{
    bird *p = new sparrow();
    p->fly();
    bird *p2 = new crow();
    p2->fly();
    bird *p3 = new pangwin();
    p3->fly();
}
