//simple box class

#include<iostream>

template<typename t>

class box
{
    private:
        t a;
        t b;
    public:
        void display()
        {
            std::cout<<"print : "<<a<<" "<<b<<std::endl;
        }
        void modify(t a,t b)
        {
            this->a=a;
            this->b=b;
        }
};
int main()
{
    box<int>b1;
    box<float>b2;

    b1.modify(3,5);
    b2.modify(10.5,11.8);

    b1.display();
    b2.display();
}