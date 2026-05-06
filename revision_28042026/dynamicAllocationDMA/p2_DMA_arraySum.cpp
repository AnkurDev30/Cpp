/*
Requirements:
User enters array size at runtime
Create dynamic array
Take array input
Print:
elements
total sum
average
Free memory

👉 Focus:

new[]
delete[]
loops with pointers
*/

#include<iostream>

class ArrayDMASum
{
    public:
        int *p;
        int n;
        ArrayDMASum(int numOfElement)
        {
            n = numOfElement;
            p = new int[n];
        }
        ~ArrayDMASum()
        {
            delete[] p;
        }
        void InputArray()
        {
            std::cout<<"enter array elements one by one\n";
            for(int i=0;i<n;i++)
            {
                std::cin>>p[i];
            }
        }
        void PrintArray()
        {
            std::cout<<"display array elements one by one\n";
            for(int i=0;i<n;i++)
            {
                std::cout<<p[i]<<" ";
            }
            std::cout<<std::endl;
        }
        void SumAndAverageArray()
        {
            int sum =0;
            
            for(int i=0;i<n;i++)
            {
                sum+=p[i];
            }  
            
            std::cout<<"sum of element = "<<sum<<std::endl;

            int avg = sum/n;

            std::cout<<"average = "<<avg<<std::endl;
        }
};

int main()
{
    int n;
    std::cout<<"enter no of elements"<<std::endl;
    std::cin>>n;
    ArrayDMASum obj(n);
    obj.InputArray();
    obj.PrintArray();
    obj.SumAndAverageArray();
    return 0;
}