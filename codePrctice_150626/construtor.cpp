#include<iostream>
class costp
{
    public:
        int p;
        costp()
        {
            std::cout<<"default construtor\n";
        }
        costp(int p)
        {
            std::cout<<"parameterized construtor\n";
            this->p=p;
        }
        costp(costp &q)
        {
            std::cout<<"copy construtor\n";
            this->p=q.p;
        }
        void display()
        {
            std::cout<<"p value = "<<p<<std::endl;
        }
        void set(int p)
        {
            this->p=p;
        }
};
int main()
{
    costp o1;
    o1.display();

    costp o2(9);
    o2.display();

    costp o3(o2);
    o3.display();

    o2.set(12);
    o3.display();
}