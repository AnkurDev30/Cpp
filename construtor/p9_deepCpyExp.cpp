//deep copy example
//1. all object have seaprate memory.
//2. one object chnge not effecetd other.
//3. if delete one object other one not delete.

#include<iostream>
class deepCpy
{
    public:
        int *p;
        deepCpy(int q)
        {
            p=new int(q);
        }
        void printData()
        {
            std::cout<<"display data = "<<*p<<std::endl;
        }
        ~deepCpy()
        {
           delete p;
        }        
        deepCpy(deepCpy &q)
        {
            p=new int(*q.p);
        }
};
int main()
{
    deepCpy d1(10);
    d1.printData();
    

    deepCpy d2(d1);
    d2.printData();

    int a=20;
    *d2.p = 20;
    d1.printData();

     d2.printData();

}