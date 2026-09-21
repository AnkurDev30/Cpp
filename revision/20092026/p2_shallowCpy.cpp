#include<iostream>
//#include<>
class s
{
    public:
        int *p=nullptr;
        s(int a)
        {
            p=new int(a);
        }
        s(s&obj)
        {
            p=obj.p;
        }
        void read()
        {
            std::cout<<"data: "<<*p<<std::endl;;
            //std::cin>>*p
        }
        void modify(int x)
        {
            *p=x;
        }

};
int main()
{
    s s1(5);
    s1.read();
    
    s s2(s1);

    s2.read();
}