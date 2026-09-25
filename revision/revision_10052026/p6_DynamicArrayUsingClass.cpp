/*
🧱 CONSTRUCTORS / DMA
5. Dynamic Array Using Class
Concepts:
new/delete
destructor
*/
#include<iostream>
class dynamicArray
{
    public:
        int *p;
        int size;
    dynamicArray(int size)
    {
        std::cout<<"allocate memory\n";
        p = new int [size];
        this->size = size;
    }
    ~dynamicArray()
    {
        delete[]p;
    }
    void readArray()
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<"enter elemnt of array : "<<i<<std::endl;
            std::cin>>p[i];
        }
        std::cout<<std::endl;
    }
    void displayArray()
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<i<<" : "<<p[i]<<std::endl;
        }
        std::cout<<std::endl;
    }
};
int main()
{
    int size;
    std::cout<<"enter size for array\n";
    std::cin>>size;
    dynamicArray obj(size);
    obj.readArray();
    obj.displayArray();
    return 0;
}