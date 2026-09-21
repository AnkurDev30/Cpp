//in this program we check how unique ptr defined and how for structure and class define.

#include<iostream>
#include<memory>
class a
{
    public:
        a();
};
a::a()
{
    std::unique_ptr<char>p=std::make_unique<char>('A');
    std::cout<<*p<<std::endl;
}
int main()
{
    std::unique_ptr<int>p1 (new int(10));
    std::unique_ptr<float>p2=std::make_unique<float>(3.7);


    std::cout<<*p1<<std::endl;
    std::cout<<*p2<<std::endl;

    a a1;
}