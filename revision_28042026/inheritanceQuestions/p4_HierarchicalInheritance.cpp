//Hierarchical inheritance
#include<iostream>
namespace nHierarchicalInheritance
{
    class A
    {
        public:
            void Afun()
            {
                std::cout<<" fun A"<<std::endl;
            }
    };
    class B:public A
    {
        public:
            void BFun()
            {
                Afun();
                std::cout<<"Bfun with A"<<std::endl;
            }
    };
    class C:public A
    {
        public:
            void CFun()
            {
                Afun();
                std::cout<<"Cfun with A"<<std::endl;
            }
    };
}

using namespace nHierarchicalInheritance;
int main()
{
    B b1;
    C c1;
    b1.BFun();
    c1.CFun();
}