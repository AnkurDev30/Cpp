//try to overload ==

#include<iostream>
class Test
{
    private:
        int a;
    public:
        void get()
        {
            std::cin>>a;
        }
        void operator == (Test t1)
        {
            if(t1.a==this->a)std::cout<<"equal\n";
            else std::cout<<"not equal\n";
        }
};
int main()
{
    Test t1,t2;
    std::cout<<"enter a value for t1\n";
    t1.get();
    std::cout<<"enter a value for t2\n";
    t2.get();  

    t1 == t2;
    return 0;
}