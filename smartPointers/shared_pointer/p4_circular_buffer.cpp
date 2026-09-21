#include<iostream>
#include<memory>
class B;
class A 
{
    public:
        std::shared_ptr<B>b;
        A()
        {
            std::cout<<"i am class a\n";
        }
        ~A()
        {
            std::cout<<"destructor of a\n";
        }        
};
class B 
{
    public:
        std::weak_ptr<A>a;
        B()
        {
            std::cout<<"i am class b\n";
        }
        ~B()
        {
            std::cout<<"destructor of b\n";
        }        
};
int main()
{
    std::shared_ptr<A>objA = std::make_shared<A>();
    std::shared_ptr<B>objB = std::make_shared<B>();

    objA->b=objB;
    objB->a=objA;

    std::cout<<"count A= "<<objA.use_count()<<std::endl;
    std::cout<<"count B= "<<objB.use_count()<<std::endl;
}