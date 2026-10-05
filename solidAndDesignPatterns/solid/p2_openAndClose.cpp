//open and close principal
// every class should be always ready for 
//open for extension and close for modification

#include<iostream>

class engine
{
    public:
        virtual void engineType()
        {
            std::cout<<"engine type class\n";
        }
};

class petrol:public engine
{
    public:
        void engineType()
        {
            std::cout<<"petrol type engine\n";
        }
};
class electric:public engine
{
    public:
        void engineType()
        {
            std::cout<<"electric type engine\n";
        }
};

int main()
{
    engine *e1=new petrol();
    engine *e2=new electric();

    e1->engineType();
    e2->engineType();
}