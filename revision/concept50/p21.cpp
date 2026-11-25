//Implement Rule of Three using a dynamically allocated array.

#include<iostream>

class ruleOf3 
{

    public:
        int *p;
        ruleOf3()
        {
            p = nullptr;
            std::cout<<"default construtor\n";
        }
        //parameterized construtor.
        ruleOf3(int data)
        {
            p = new int (data);
        }
        ruleOf3(ruleOf3& obj)
        {
            p = new int(*obj.p);
        }
        ruleOf3& operator = (ruleOf3& obj)
        {
            if(this!=&obj)
            {
                int *temp = new int(*obj.p);
                delete p;
                p=temp;
            }
            return *this;
        }
        void display()
        {
            std::cout<<"display data = "<<*p<<std::endl;
        }
        ~ruleOf3()
        {
            delete p;
            std::cout<<"destrutor\n";
        }
};
int main()
{
    ruleOf3 r1(13);
    r1.display();

    ruleOf3 r2=r1;
    r2.display(); 

    ruleOf3 r3;
    r3=r2;
    r3.display();
}