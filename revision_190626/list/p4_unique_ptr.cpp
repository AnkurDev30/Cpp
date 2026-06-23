#include<iostream>
#include<memory>
int main()
{
  //  std::unique_ptr<int>p(new (int (100)));
    std::unique_ptr<int> p(new int(100));
    std::cout<<*p<<std::endl;
    std::shared_ptr<int >p2(new int(20));
    std::shared_ptr<int>p3=p2;

    std::cout<<*p2<<*p3<<std::endl;
}