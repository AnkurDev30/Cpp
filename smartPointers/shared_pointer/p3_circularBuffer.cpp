#include<iostream>
#include<memory>
class B;
class A
{
    public:
        std::shared_ptr<B>b;
        A()
        {
            std::cout<<"from A\n";
        }
};
class B
{
    public:
    std::weak_ptr<A>a;
        B()
        {
            std::cout<<"from B\n";
        }
};

int main()
{
    std::shared_ptr<A>objA = std::make_shared<A>();
    std::shared_ptr<B>objB = std::make_shared<B>();

    objA->b=objB;
    objB->a=objA;

    std::cout<<"count "<<objA.use_count()<<std::endl;
    std::cout<<"count "<<objB.use_count()<<std::endl;
}


