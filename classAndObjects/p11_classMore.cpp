#include<iostream>

class date
{
    private:
        int dd,mm,yy;
    public:
        date()
        {
            std::cout<<"reached here\n";
        }
};
int main()
{
    date d1;

    date *p = &d1;

    std::cout<<p<<std::endl;
}