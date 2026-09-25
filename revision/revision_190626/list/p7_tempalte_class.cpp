//tempalte class

#include<iostream>

template<typename t,typename p>
class robin
{
    private:
        t a;
        p c;
    public:
        robin(t x,p y)
        {
            a=x;
            c=y;
        }

        void display()
        {
            std::cout<<"a = "<<a<<" c = "<<c<<std::endl;
        }
};
int main()
{
    robin r1(8,9);
    r1.display();

    robin r2(8.9,9.9);
    r2.display();


    robin r3('A','B');
    r3.display();
}