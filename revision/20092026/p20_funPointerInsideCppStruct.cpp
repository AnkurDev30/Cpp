#include<iostream>
struct Abc 
{
    int a;
    std::string name;
    void (*fp)(void*);
};
void myPrintf(void *dta)
{
    Abc *p= (Abc*)dta;

    std::cout<<p->a<<" "<<p->name<<std::endl;
}
int main()
{
    Abc *a1;
    a1 = new Abc();

    a1->a=90;
    a1->name = "ankur";

    a1->fp = myPrintf;
    a1->fp(a1);

}