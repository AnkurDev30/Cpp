/**
🧱 BASIC OOP
1. Student Record System
Concepts:
class
object
functions
*/
#include<iostream>
#include<iomanip>
#include<string>
class student 
{
    private :
        std::string nameST;
        int roll;
        float marks;
    public:
        void getData();
        void printData(); 
};
void student::getData()
{
    std::cout<<"enter student name\n";
    std::cin>>nameST;
    std::cout<<"enter rollnumber\n";
    std::cin>>roll;
    std::cout<<"enter marks\n";
    std::cin>>marks;
}
void student::printData()
{
    std::cout<<std::left<<std::setw(10)<<nameST
    <<std::right<<std::setw(10)<<roll
    <<std::right<<std::setw(10)<<marks<<std::endl;
}
int main()
{
    int numOfSTudent;
    std::cout<<"enter number of student\n";
    std::cin>>numOfSTudent;

    student *pStudentObj;

    pStudentObj =new student[numOfSTudent];

   // std::cout<<"enter data of student : "<<numOfSTudent<<std::endl;

    for(int i=0;i<numOfSTudent;i++)
    {
        std::cout<<"enter data of student : "<<i+1<<std::endl;
        pStudentObj[i].getData();
    }

    std::cout<<"display data:\n";
    std::cout<<std::left<<std::setw(10)<<"Name"
    <<std::right<<std::setw(10)<<"RollNumber"
    <<std::right<<std::setw(10)<<"Marks"<<std::endl;

    for(int i=0;i<numOfSTudent;i++)
    {
        pStudentObj[i].printData();
    }

    delete[] pStudentObj;
}