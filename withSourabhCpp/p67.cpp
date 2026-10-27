//- dyanamic_cast: static cast 2 dynamic cast
//dyamic cast will tell base class pointer point to derived class successfully 
// id its not point suceesfully we will get nullptr after dynamic cast
// dyamic cast one kind of checking techniqe where we check base 
// poinrter point properly or not to derived class.

#include<iostream>
class base 
{
    public:
       virtual void fun()
       {
        std::cout<<"hello\n";
       } 
};
class derived :public base
{
    public:
        void fun()
        {
            std::cout<<"hi\n";
        }
};
int main()
{

    base *p = new derived();

    derived *q = dynamic_cast<derived*>(p);

    if(q==nullptr)
    {
        std::cout<<"not success dynamic cast\n";
        return 0;
    }
    std::cout<<" success dynamic cast\n";

}