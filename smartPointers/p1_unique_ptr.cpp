//unique_ptr
#include<iostream>
#include<memory>
int main()
{
    std::unique_ptr<int>p(new int());
    std::cout<<"enter p value\n";
    std::cin>>*p;
    std::cout<<"enterd value = "<<*p<<std::endl;
}