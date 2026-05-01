//p9_Public To Public _Inheritance Understanding

#include<iostream>
class base
{
    public:
        int pub;
        base()
        {
            std::cout<<"enter value of pub,pri,pro variables"<<std::endl;
            std::cin>>pub>>pri>>pro;
        }
    private:
        int pri;
    protected:
        int pro;
};
class drive:public base
{
    public:
        void deriveFun()
        {
            //int add = pub+pro+pri;//give error because private cant not read in derived class as well.
            int add = pub+pro;
            std::cout<<"add= "<<add<<std::endl;
        }
    private:

    protected:
};

int main()
{
    drive d1;
    d1.deriveFun();
    int a= d1.pub;//if inheritance type is public then user can access base and drive class members to outside.
    
    /********* give error  if uncomment */
   // int b=d1.pri;//give error
   // int c=d1.pro;// give error because protected and private can not read outside of class.
    std::cout<<"a "<<a<<std::endl;
}