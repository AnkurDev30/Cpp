#include<iostream>
class base
{
    public:
        int a;
        base()
        {
            std::cout<<"read a b c\n";
            std::cin>>a>>b>>c;
        }
    protected :
        int b;
    private:
        int c;
};
class child: public base
{
    private:

    public:
        void privateVar()
        {
           // std::cout<<"privateVar : "<<c<<std::endl;
        }
        void protectedVar()
        {
            std::cout<<"protectedVar : "<<b<<std::endl;
        }
        void publicVar()
        {
            std::cout<<"publicVar : "<<a<<std::endl;
        }

};
int main()
{
    child c1;
    //base b1;
    c1.protectedVar();
   // c1.
}


base :

child: private base 
    base data allow, public or protected
child 1: private child
    child  data allow, public or protected, base data not allow
child 2: public child,private base
    child data allow, public or protecte 