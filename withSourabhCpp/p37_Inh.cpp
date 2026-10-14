//public relations
#include<iostream>
class a
{
    private:
        int a;
    public:
        int b;
        void fun()
        {
            std::cout<<"hello\n";
        }
    protected:
        int c;
};
class b1 : protected a 
{
    public:
        void read()
        {
            std::cin>>b;
            std::cin>>c;
        }
};
class b3:public b1
{
    public:
        void b33()
        {
            read();
            fun();
        }     
};
int main()
{
    b1 b2;
    b2.read();
    b2.fun();
}