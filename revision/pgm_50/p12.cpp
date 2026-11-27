/**
Program 7: Dynamic memory inside a class

Create a class Array:
- Allocate an array dynamically inside the constructor.
- Create a function to accept elements.
- Create a function to display elements.
- Release memory inside the destructor.
*/

#include<iostream>

class classArray 
{
    private:
        int *p = nullptr;
        int elements ;
    public:
        classArray(int elements1):elements(elements1)
        {
            p = new int[elements];
        }
        void readData()
        {
            std::cout<<"accept elements\n";

            for(int i=0;i<elements;i++)
            {
                std::cin>>p[i];
            }
        }
        void display()
        {
            std::cout<<"print elements\n";

            for(int i=0;i<elements;i++)
            {
                std::cout<<p[i]<<" ";
            }           
            std::cout<<"\n";
        }

        ~classArray()
        {
            delete [] p;
            p=nullptr;
        }

};

int main()
{
    int elements = 0;
    std::cout<<"enter  elements for array\n";
    std::cin>>elements;

    if(elements>0)
    {
        classArray c1(elements);
        c1.readData();
        c1.display();
    }
    else 
    {
        std::cout<<"number of elements should be more than 0\n";
    }
    
}