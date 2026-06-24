//Abstract Class

#include<iostream>
class abstractClass
{
    public:
        virtual void functionVar()=0;
};
class abstractClassD:public abstractClass
{
    public:
        void functionVar()
        {
            std::cout<<"hello\n";
        }
};
class abstractClassE:public abstractClass
{
    public:
        void functionVar()
        {
            std::cout<<"Hi\n";
        }
};
int main()
{
    abstractClass *p = new abstractClassD();
    p->functionVar();
    p =new abstractClassE();
    p->functionVar();
}