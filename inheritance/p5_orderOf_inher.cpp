#include<iostream>

class base 
{
    protected :
        int i;
    public:
        base()
        {
            i=4;
        }
};
class der:public base
{
    private:
        int j;
    public:
        der()
        {
            j = i*4;
            std::cout<<"j = "<<j<<std::endl;
        }
};
int main()
{
    der d;
}