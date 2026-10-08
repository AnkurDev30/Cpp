#include<iostream>
class Superman;
class Batman 
{
    private:
        int a{10};
        static int x;
    public:
        int b{20};
    protected:
        int c{30};
        friend class Superman;
};
int Batman::x=24;
class Superman
{
    public :
        Batman bi;
        void readFromBat()
        {
            std::cout<<bi.a<<std::endl;
            std::cout<<bi.b<<std::endl;
            std::cout<<bi.c<<std::endl;
            std::cout<<Batman::x<<std::endl;
        }
};
int main()
{
   // Batman b;
    Superman s;
    s.readFromBat();
}
