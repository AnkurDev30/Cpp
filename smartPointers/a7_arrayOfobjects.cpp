#include<iostream>
#include<memory>

class ax
{
    public:
        int x;
        void read()
        {
            std::cout<<"enter value\n";
            std::cin>>x;
        }
        void print()
        {
            std::cout<<x<<"\n";
        }
};

int main()
{
    std::unique_ptr<ax[]>p = std::make_unique<ax[]>(10);

    for(int i=0;i<5;i++)
    {
        p[i].read();
    }
    for(int i=0;i<5;i++)
    {
        p[i].print();
    }
}