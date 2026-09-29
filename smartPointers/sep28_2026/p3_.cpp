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
    std::shared_ptr<B>a = std::make_shared<B>();
    std::shared_ptr<A>b = std::make_shared<A>();

    a->b = b;
    b->a = a;

    std::cout<<a.use_count()<<std::endl;
    std::cout<<b.use_count()<<std::endl;
}