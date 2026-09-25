//copy construtor
#include<iostream>
class name
{
    public:
        int *p;
        name(int data)
        {
            p=new int(data);
        }
        void display()
        {
            std::cout<<"p value = "<<*p<<std::endl;
        }
        name (name &obj)
        {
            p=obj.p;
        }
        void update(int data)
        {
            *p=data;
        }
};
int main()
{
    name obj1(5);
    std::cout<<"obj 1 data\n";
    obj1.display();
    name obj2(obj1);
    std::cout<<"obj 2 data\n";
    obj2.display();

    obj2.update(9);

    std::cout<<"obj 2 data\n";
    obj2.display();
    std::cout<<"obj 1 data\n";
    obj1.display();
    return 0;
}