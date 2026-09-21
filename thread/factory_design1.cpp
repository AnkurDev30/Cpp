#include<iostream>

class engine
{
   public:
    virtual void start()
    {
        std::cout<<"base class fun\n";
    } 
};
class car :public engine
{
    public:
    void start()
    {
        std::cout<<"car class fun\n";
    } 
};
class bike :public engine
{
    public:
    void start()
    {
        std::cout<<"bike class fun\n";
    } 
};
class Factory
{
    public :
        static engine* funtion(int type)
        {
            if(type==1)
            return new car;
            else if(type ==2)
            return new bike;

            return nullptr;
        }
};
int main()
{
    int type   = 0;
    type=1;
    engine *e1 = Factory::funtion(type);

    e1->start();
}