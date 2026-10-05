#include<iostream>
class one
{
    private:
        int a,b;
        int c;
    public:
        void add ()
        {
            std::cout<<"enter 2 numbers\n";
            std::cin>>a>>b;
            c=a+b;
            std::cout<<"result = "<<c<<std::endl;
        }
};

int main()
{
    one a;// ais object
    a.add();
    
}