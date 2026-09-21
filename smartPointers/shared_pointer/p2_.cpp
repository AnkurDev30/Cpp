#include<iostream>
#include<memory>

int main()
{
    std::unique_ptr<int>u = std::make_unique<int>(200);
    std::cout<<"u = "<<*u<<std::endl;

    std::shared_ptr<int>s1 =std::make_shared<int>(300);
    std::shared_ptr<int>s2 =s1;

    std::cout<<"count "<<s1.use_count()<<std::endl;
}