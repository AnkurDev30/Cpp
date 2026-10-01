#include<iostream>
#include<vector>
enum status
{
    A,B,C
};
void fun()
{
    int a[5];
    std::vector<int>vec;
    for(int i=0;i<5;i++)
    {
        a[i]=rand()%100;
    }
    std::cout<<"print before\n";
    for(int i=0;i<5;i++)
    {
        std::cout<<a[i]<<std::endl;
    }
     std::cout<<"\n";
    for(int i=0,j=4;i<j;j--,i++)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    std::cout<<"print after\n";
    for(int i=0;i<5;i++)
    {
        std::cout<<a[i]<<std::endl;
    }
     std::cout<<"\n";
}
int main()
{
    fun();
    status s=B;
    std::cout<<"status "<<s<<std::endl;
}