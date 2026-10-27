//final: final is a keyward it will tell to the complier dont do inheritance 
//dont do polymorphishm(virtual funtion )

#include<iostream>
class base final
{
    public:
        virtual void fun()
        {
            std::cout<<"hello  i am base\n";
        }
        void fun2()
        {
            std::cout<<"check inheritance\n";
        }
};
class derived //:public base 
{
    public:
        void fun() 
        {
            std::cout<<"hi i am derived\n";
        }
        //void fun()
        //{
        //    std::cout<<"hi i am derived2\n";
        //}
};

int main()
{
    base p ;
    derived d;
   // d.fun2();
}