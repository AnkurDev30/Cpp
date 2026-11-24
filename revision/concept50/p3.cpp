#include<iostream>
#include<memory>

std::unique_ptr<int[]> fun(int sizeArray)
{
    std::unique_ptr<int[]>p = std::make_unique<int[]>(sizeArray);

    std::cout<<"enter data\n";

    for(int i=0;i<sizeArray;i++)
    {
        std::cin>>p[i];
    }

    std::cout<<"prin inside fun\n";

    for(int i=0;i<sizeArray;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";
    return p;
}

int main()
{
    std::unique_ptr<int[]> A=nullptr;
    int sizeArray = 5;
    A = fun(sizeArray);
    std::cout<<"prin inside main\n";

    for(int i=0;i<sizeArray;i++)
    {
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";

}