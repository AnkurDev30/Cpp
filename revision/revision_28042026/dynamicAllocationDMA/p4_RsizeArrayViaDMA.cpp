/*
🧱 Problem 4 — Resize Dynamic Array (IMPORTANT 🔥)
Requirements:
Create dynamic array of size n
Later user wants bigger size
Create new array
Copy old data
Delete old array
Add new values

👉 Focus:

manual resizing
copy logic
memory management
*/

#include<iostream>
class resizeArray
{
    private:
    void printData(int *p,int sizeVar);
    public:
        int oldData;
        int *pArray;
        int *qArray;
        resizeArray(int oldData)
        {
            this->oldData = oldData;
            pArray = new int[this->oldData];
        }
        void readOldData();
        void readNewData();
        

        ~resizeArray()
        {
            delete[] qArray;
            delete[] pArray;
        }        
};
void resizeArray::readOldData()
{
    std::cout<<"enter array element"<<std::endl;
    for(int i =0;i<oldData;i++)
    {
        std::cin>>pArray[i];
    }
    std::cout<<"display ols data\n";
    printData(pArray,oldData);
}
void resizeArray::readNewData()
{
    int newData;
    std::cout<<"enter new size of array\n";
    std::cin>>newData;

    //Allocated memory
    qArray = new int[newData];

    //first copy old data.
    for(int i=0;i<oldData;i++)
    {
        qArray[i]=pArray[i];
    }

    //new data read.
    for(int i=oldData;i<newData;i++)
    {
        std::cin>>qArray[i];
    }
    std::cout<<"display new Array\n";
    printData(qArray,newData);
}
void resizeArray::printData(int *p,int length)
{

        for(int i=0;i<length;i++)
        {
            std::cout<<p[i]<<" ";
        }
        std::cout<<"\n";
}
int main()
{
    int noOfElementsOld;
    std::cout<<"enter old size elements for array\n";
    std::cin>>noOfElementsOld;

    resizeArray obj(noOfElementsOld);

    obj.readOldData();
    obj.readNewData();
}