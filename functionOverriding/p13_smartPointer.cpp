//30 sep 2026

#include<iostream>
#include<memory>


void fun()
{
    std::unique_ptr<int>p = std::make_unique<int>();
    *p=12;
    std::cout<<"value = "<<*p<<std::endl;
    std::cout<<"address = "<<p.get()<<std::endl;
    int *a=p.get();
    std::cout<<" a value = "<<*a<<std::endl;
    std::cout<<"a address = "<<a<<std::endl;

    std::unique_ptr<int>f = std::make_unique<int>();
    f=std::move(p);
    std::cout<<"value = "<<*f<<std::endl;
    std::cout<<"address = "<<f.get()<<std::endl;    
}
void fun2()
{
    std::shared_ptr<int>p =std::make_shared<int>();
    *p=24;
    std::shared_ptr<int>q =std::make_shared<int>();
    q=p;

    std::cout<<"value of p and q "<<*p <<" "<<*q<<std::endl;
    std::cout<<"address of p and q = "<<p.get()<<" "<<q.get()<<std::endl;
}
class B;
class A 
{
    public:
    std::shared_ptr<B>p;
};
class B 
{
    public:
    std::weak_ptr<A>q;
};
int main()
{
   std::shared_ptr<A>OBJA = std::make_shared<A>();
   std::shared_ptr<B>OBJB = std::make_shared<B>();

   OBJA->p=OBJB;
   OBJB->q=OBJA;

   std::cout<<OBJA.use_count()<<std::endl;
   std::cout<<OBJB.use_count()<<std::endl;
}