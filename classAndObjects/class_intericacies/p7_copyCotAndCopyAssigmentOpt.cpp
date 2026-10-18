#include<iostream>

class ruleOf3 
{
    private:    
        int *p=nullptr;
    public:
        ruleOf3()
        {
            std::cout<<"hello\n";
            int y;
            std::cout<<"enter num\n";
            std::cin>>y;
            p=new int (y);
        }
        ruleOf3(ruleOf3& obj)
        {
            p = new int(*obj.p);
        }
        ruleOf3(int p1)
        {
            p = new int (p1);
        }
        ruleOf3& operator = (ruleOf3 &obj)
        {
            delete p;
            p=new int (*obj.p);
            return *this;
        }
        void display()
        {
            std::cout<<"data : "<<*p<<std::endl;
        }
        ~ruleOf3()
        {
            delete p;
        }
};
int main()
{
    ruleOf3 r1;
    r1.display();
    ruleOf3 r2;
    r2.display();

    r2=r1;
    std::cout<<"after copy assigment\n";
    r2.display();

    ruleOf3 r3(r2);
    std::cout<<"after copy constructor\n";
    r3.display();
}