#include<iostream>
#include<memory>

int main()
{

    std::shared_ptr<int>p1=std::make_shared<int>(23);
    std::shared_ptr<int>p2=p1;

    std::cout<<*p1<<" "<<*p2<<std::endl;

    std::cout<<p1.use_count()<<" "<<p2.use_count()<<std::endl;

    p1.reset();
    std::cout<<p1.use_count()<<" "<<p2.use_count()<<std::endl;

    //std::cout<<*p1<<" "<<*p2<<std::endl;
}