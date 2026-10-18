//pre increment 
#include<iostream>
class pre 
{

    private:
        int value;
    public:
        pre(int value1)
        {
            value =value1;
        }
        pre& operator ++()
        {
            value++;
            return *this;
        }
        void display()
        {
            std::cout<<value<<" \n";
        }
};
int main()
{
    pre p(0);
    ++p;
    p.display();
}