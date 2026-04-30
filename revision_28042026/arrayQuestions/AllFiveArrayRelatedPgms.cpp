

#include<iostream>

class cArrayQuestions
{
    private:
         int size;
    public:
    int *array;
        cArrayQuestions(int num):size(num)
        {
             array = new int[size];
        }
        //questions
       // int iQuestions();
        //read array element.
        void vReadArrayElement();
        //Find largest element
        void vFindLargestElement();
        //print elements
        void printArray();
        void vReverseArray();
        void vSumOfArrayElement();
        void vShortArray();
        void vFindDuplicateElement();
        ~cArrayQuestions()
        {
            delete[] array;
        }
        
};
int iQuestions()
{
    int opt= 0;
        std::cout<<"Q1. Find largest element    "<<std::endl;
        std::cout<<"Q2. Reverse array           "<<std::endl;
        std::cout<<"Q3. Sum of array elements   "<<std::endl;
        std::cout<<"Q4. Sort array (simple)     "<<std::endl;
        std::cout<<"Q5. Find duplicate elements "<<std::endl;
        std::cin>>opt;
    return opt;
}
void cArrayQuestions::printArray()
{
    std::cout<<"display array"<<std::endl;
    for(int x=0;x<size;x++)
    {
        std::cout<<array[x]<<" ";
    }
    std::cout<<std::endl;
}
void cArrayQuestions::vReadArrayElement()
{
    std::cout<<"enter element "<<size<<std::endl;
    for(int x=0;x<size;x++)
    {
        std::cin>>array[x];
    }
    printArray();
}
void cArrayQuestions::vFindLargestElement()
{
    int largest = array[0];
    std::cout<<"find largest element of array"<<std::endl;
    for(int i=0;i<size;i++)
    {
        if(largest<array[i])
        {
            largest = array[i];
        }
    }
    std::cout<<"largest element = "<<largest<<std::endl;
}
void cArrayQuestions::vReverseArray()
{
    int j;
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        int temp = array[j];
        array[j]=array[i];
        array[i]=temp;
    }
    std::cout<<"after reverse element"<<std::endl;
    printArray();
}
void cArrayQuestions::vSumOfArrayElement()
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+= array[i];
    }
    std::cout<<"sum 0f element = "<<sum<<std::endl;

}
void cArrayQuestions::vShortArray()
{
    int i,j,temp;
    std::cout<<"short array element"<<std::endl;
    for(i=0;i<size-1;i++)//11 22 33 44 55
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printArray();
}
void cArrayQuestions::vFindDuplicateElement()
{
    int duplicate,k=0;

    for(int i=0;i<size;i++)//11 11 22 22 44
    {
        duplicate=array[i];
        for(int j=i+1;j<size;j++)
        {
            if(duplicate == array[j])
            {
                std::cout<<array[j]<<" ";

            }
            
        }
    }
    std::cout<<std::endl;
}
int main()
{
    int arraySize = 0;
  
    int opt = iQuestions();

    std::cout<<"enter array size"<<std::endl;
    std::cin>>arraySize;
    cArrayQuestions objQ1(arraySize);
    objQ1.vReadArrayElement();

    if(opt == 1)objQ1.vFindLargestElement();
    else if(opt == 2)objQ1.vReverseArray();
    else if(opt == 3)objQ1.vSumOfArrayElement();
    else if(opt == 4)objQ1.vShortArray();
    else if(opt == 5)objQ1.vFindDuplicateElement();
}