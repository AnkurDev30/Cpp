//release and reset.

#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int>p=std::make_unique<int>(2);

    p.reset();

    if(p==nullptr)
    {
        p=std::make_unique<int>(100);
        std::cout<<*p<<std::endl;
    }

    int *a;
    a=p.get();

    std::cout<<*a<<std::endl;

    a = p.release();
    std::cout<<*a<<std::endl;
}