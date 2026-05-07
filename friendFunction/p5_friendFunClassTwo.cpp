//compare 2 class variable
#include<iostream>
class sample1;
class sample2
{
    private :
        int a;
        friend void fun(sample1 s1,sample2 s2);
    public:
        sample2(int p): a(p){};

};
class sample1
{
    private :
        int b;
        friend void fun(sample1 s1,sample2 s2);
    public:
        sample1(int p): b(p){};
        
};
void fun(sample1 s1,sample2 s2)
{
    std::cout<<"a = "<<s1.b<<std::endl;
    std::cout<<"b = "<<s2.a<<std::endl;
}

int main()
{
    sample1 s1(12);
    sample2 s2(24);

    fun(s1,s2);
}