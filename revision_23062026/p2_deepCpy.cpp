//deep copy.
#include<iostream>
class deepCpy
{
    public:
        int *p;
        deepCpy(int data)
        {
            p = new int(data);
        }
        void display()
        {
            std::cout<<"p = "<<*p<<std::endl;
        }
        deepCpy(deepCpy &obj)
        {
            int d = *obj.p;
            p = new int (d);
        }
        void update(int data)
        {
            *p=data;
        }
        ~deepCpy()
        {
            std::cout<<"delete data\n";
            delete p;
        }
};
int main()
{
    deepCpy d1(3);
    std::cout<<"d1 display\n";
    d1.display();

    //deep copy.
    deepCpy d2(d1);
    std::cout<<"d2 display\n";
    d2.display();

    d2.update(7);
    std::cout<<"d1 display\n";
    d1.display();
}