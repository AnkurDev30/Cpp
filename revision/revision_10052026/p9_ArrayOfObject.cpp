/*
8. Array of Objects
Concepts:
object arrays
constructor calls
*/
#include<iostream>
#include<iomanip>
class arrayOfObject
{
    public:
        struct student
        {
            int roll;
            std::string name;
        };
        student stdvar;
        void readData(int r,std::string name)
        {
            stdvar.roll=r;
            stdvar.name = name;
        }
        void displayData()
        {

            std::cout<<std::left<<std::setw(10)<<"roll : "<<stdvar.roll
            <<" "<<std::right<<std::setw(10)<<"name : "<<stdvar.name<<std::endl;
        }
    
};
int main()
{
    int sizeArray;
    std::cout<<"enter array size \n";
    std::cin>>sizeArray;

    arrayOfObject pob[sizeArray];

    for(int i=0;i<sizeArray;i++)
    {
        int r;   
        std::string name;

        std::cout<<"enter roll\n";
        std::cin>>r;
        std::cout<<"enter name\n";
        std::cin>>name;
        pob[i].readData(r,name);
    }

    for(int i=0;i<sizeArray;i++)
    {
        pob[i].displayData();
    }
    return 0;
}

