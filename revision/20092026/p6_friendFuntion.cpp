#include<iostream>
class robinhood 
{
    private:
        int a{11};
        friend void funtion(robinhood& read);
    public:
        int b{12};
    protected:
        int c{13};
};
void funtion(robinhood& read)
{
    int a = read.a;
    int b = read.b;
    int c = read.c;

    std::cout<<a<<" "<<b<<" "<<c<<std::endl;
}

int main()
{
    robinhood r1;
    funtion(r1);
}