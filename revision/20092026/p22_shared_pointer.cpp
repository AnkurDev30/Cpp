#include<iostream>
#include<memory>
class B;
class A 
{
    public:
    std::shared_ptr<B>b;
};
class B 
{
    public:
    std::weak_ptr<A>a; 
};

int main()
{
    std::shared_ptr<A>objA = std::make_shared<A>();
    std::shared_ptr<B>objB = std::make_shared<B>();

    objA->b=objB;
    objB->a=objA;

    std::cout<<"A = "<<objA.use_count()<<std::endl;
    std::cout<<"B = "<<objB.use_count()<<std::endl;

}

