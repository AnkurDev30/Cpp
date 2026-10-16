#include<iostream>




/**deep copy */
class make 
{
    private:
        int *p = nullptr;
    public:
        make(int a)
        {
            std::cout<<"parameter construtor\n";
            p = new int(a);
        }
        void display()
        {
            std::cout<<"display : "<<*p<<std::endl;
        }
        make(make &obj)
        {
           std::cout<<"copy construtor\n";
            p = new int (*obj.p);
        }
        ~make()
        {
            std::cout<<"distrutor \n";
            delete  p ;
        }

};
int main()
{
    make m1(5);
    m1.display();

    make m2 = m1;//make m2(m1);
    m2.display();
}
