#include<iostream>
struct S 
{
    int roll;
    std::string name;
    void (*fp)(void *);
};
void print(void* data)
{
    S *data1 = static_cast<S*>(data);
    std::cout<<"num = "<<data1->roll<<std::endl;
    std::cout<<"name = "<<data1->name<<std::endl;
}
int main()
{
    S *s1;
    s1 = new S ();
    s1->roll = 1;
    s1->name = "ankur";
    s1->fp = print;
    s1->fp(s1);
}