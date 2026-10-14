//circular buffer

#include<iostream>
#include<memory>
class B;
class A 
{
    public:
        std::shared_ptr<B>a;
};
class B 
{
    public:
        std::weak_ptr<A>b;
};
int main()
{
    std::shared_ptr<A>objA = std::make_shared<A>();
    std::shared_ptr<B>objB = std::make_shared<B>();

    objA->a=objB;
    objB->b=objA;

    std::cout<<objA.use_count()<<std::endl;
    std::cout<<objB.use_count()<<std::endl;
}