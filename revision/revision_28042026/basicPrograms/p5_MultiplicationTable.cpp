//multiplication table
#include<iostream>
void multiPlicationTableFun(int n)
{
    for(int i=1;i<=10;i++)
    {
        std::cout<<n<<" * "<<i<<" = "<<n*i<<std::endl;
    }
}
int main()
{
    int n;
    std::cout<<"enter num for multiplication"<<std::endl;
    std::cin>>n;

    multiPlicationTableFun(n);
    return 0;
}