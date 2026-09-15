#include<iostream>
class Iam
{
    public:
        void hello()const
        {
            std::cout<<"hello\n";
        }
};
int main()
{
    Iam I;
    [I]()mutable
    {
        I.hello();
    }();
}

//class ka object pass karna hai to const or mutable use karna honga.