//
#include<iostream>
class Test
{

    public:
        int a;
 
       void  GetData()
        {
            std::cout<<"enter data\n";
            std::cin>>a;
        }
        void print()
        {
           
            std::cout<<"a = "<<a<<"\n";
        }
};
int main()
{
    Test obj[5];

    std::cout<<"fill value"<<std::endl;
    for(int i=0;i<5;i++)
    {
        obj[i].GetData();// T[i](i*3);
    }
    for(int i=0;i<5;i++)
    {
         obj[i].print();
    }


}