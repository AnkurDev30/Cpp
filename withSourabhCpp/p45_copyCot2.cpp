#include<iostream>


/*
user try to access valid memory nut in invalid way.segmentation fault
sf(%d,ab);
*p;
pf(%d,*p)
*/
obj1. 100000
p---> [20000]-->5

obj2- 2000000
p--->[20000]-->5


/**shallow copy */
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
            *p = *(obj.p);
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
