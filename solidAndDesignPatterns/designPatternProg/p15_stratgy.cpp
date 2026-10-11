#include<iostream>
class engine 
{
    public:
        virtual void work()=0;
        virtual ~engine(){}
};
class petrol : public engine
{
    public:
        void work()
        {
            std::cout<<"petrol\n";
        }
};
class electric : public engine
{
    public:
        void work()
        {
            std::cout<<"electric\n";
        }
};
class stratgy 
{
    private:
        engine &e;
    public:
        stratgy(engine &e1):e(e1){}
        
        void select()
        {
            e.work();
        }
};
int main()
{
    petrol p1;
    electric e1;
    stratgy s1(p1);
    s1.select();
    stratgy s2(e1);
    s2.select();

}