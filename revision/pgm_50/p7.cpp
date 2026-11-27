//Program 2: Dynamic array allocation
#include<iostream>

int main()
{

    int n;

    std::cout<<"enter array size\n";
    std::cin>>n;
    int *p = new int[n]();

    std::cout<<"enter data one by one\n";
    for(int i=0;i<n;i++)
    {
        std::cin>>p[i];
    }

    std::cout<<"print data\n";
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        std::cout<<p[i]<<" ";

        sum = sum+p[i];
    }
    std::cout<<"\n";

    double average = static_cast<double>(sum)/n;
    std::cout<<"Sum = "<<sum<<"\nAverage = "<<average<<std::endl;



    delete[] p;
}