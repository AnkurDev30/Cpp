//this is shallow copy example
//1. shallow copy happend when default copy construtor working
//2. all object shared same memory
//3. object data change other data also effected

#include<iostream>
class shlCpy
{
    public:
        int *p;
        shlCpy(int data)
        {
            //created parametrized constructore and store data
            p=new int(data);
        }
        ~shlCpy()
        {
            delete p;
        }
        void displayData()
        {
            std::cout<<"data = "<<*p<<std::endl;
        }
        void ifReqNewdata()
        {
            int newData;
            std::cout<<"enter new data"<<std::endl;
            std::cin>>newData;

            *p=newData;
        }
};
int main()
{
    int a;
    std::cout<<"enter data"<<std::endl;
    std::cin>>a;

    shlCpy obj1(a);
    
    std::cout<<"first object data print"<<std::endl;
    obj1.displayData();

    shlCpy T =obj1;//default copy construtor
    
    std::cout<<"second object data print"<<std::endl;
    T.displayData();   

    T.ifReqNewdata();

    std::cout<<"update data in new obj and try to print "
    <<"old obj for check data same upadte or not\n";

    obj1.displayData();


}

