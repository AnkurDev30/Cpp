//Swap numbers
#include<iostream>
struct Swap
{
    private:

    public:
        void swap(int &a,int &b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
};
int main()
{
    int aa,bb;
    std::cout<<"enter 2 numbers\n";
    std::cin>>aa>>bb;

    std::cout<<"before swap : "<<aa<<" "<<bb<<std::endl;
    Swap s1;
    s1.swap(aa,bb);

    std::cout<<"after swap : "<<aa<<" "<<bb<<std::endl;
}