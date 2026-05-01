//protected inheritance

#include<iostream>
class base
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        base()
        {
            std::cout<<"enter a(private) b(protected) c(public)"<<std::endl;
            std::cin>>a>>b>>c;
        }
};
class drive1:protected base
{
    public:
    void driveFun()
    {
       // int p = a; give error because we cant read private members
        int q = b;
        int r = c;
      //  std::cout<<"p = "<<p<<"q = "<<q<<"r ="<<r<<endl;
      std::cout<<"q = "<<q<<"r ="<<r<<std::endl;
    }
};
class drive2:protected drive1
{
    public:
    void driveFun()
    {
      //  int p = a;, give compilere error because private member try to access outside
        int q = b;
        int r = c;
      //  std::cout<<"p = "<<p<<"q = "<<q<<"r ="<<r<<endl;
      std::cout<<"q = "<<q<<"r ="<<r<<std::endl;
    }
};
int main()
{
    drive1 obj1;
    drive2 obj2;
    obj1.driveFun();
    obj2.driveFun();
    //int c = obj1.c;,  through error 
   // std::cout<<"a = "<<a<<std::endl;   
    base b1;
    std::cout<<"b1 c = "<<b1.c<<std::endl;

}