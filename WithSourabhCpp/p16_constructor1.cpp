#include<iostream>

class demoConsDeconst 
{
    public:
        demoConsDeconst()//default construtor
        {
            std::cout<<"I am const\n";
        }
        demoConsDeconst(int a)
        {
             std::cout<<"I am parameter const: "<<a<<"\n";
        }
        ~demoConsDeconst()
        {
            std::cout<<"I am deconst\n";
        }
};

int main()
{
    demoConsDeconst d1;
    demoConsDeconst d2(5);
}