#include<iostream>

class Index 
{
    protected :
        int count;
    public:
        Index()
        {
            count =0;
        }
        void operator ++()
        {
            count++;
        }
        void display()
        {
            std::cout<<count<<"\n";
        }
};
class newIndex : public Index 
{
    public:
        void operator --()
        {
            count --;
        }
};

int main()
{
    newIndex obj;
    ++obj;
    obj.display();
    ++obj;
    obj.display();
    --obj;
    obj.display();
    --obj;
    obj.display();
}