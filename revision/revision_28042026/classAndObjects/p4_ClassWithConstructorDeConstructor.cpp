//Class with constructor & destructor.

#include<iostream>
class cConstDeconst
{
    private:
        int a;
    public:
        cConstDeconst()
        {
            std::cout<<"enter a value"<<std::endl;
            std::cin>>a;
        }
        void display()
        {
            std::cout<<"value of a = "<<a<<std::endl;
        }
        ~cConstDeconst()
        {
            std::cout<<"distroy"<<std::endl;
        }
};
int main()
{
    cConstDeconst objConsDeconst;
    objConsDeconst.display();
    return 0;
}