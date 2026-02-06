/*
Create a class Student with:

roll number

name

marks

Member functions:

readData()

displayData()

calculateGrade()
*/
#include<iostream>
#include<iomanip>
namespace nStudentClass
{
    class cStudentClass
    {
        private:
            int iRollNum;
            std::string strName;
            float fMarks;
        public:
            void vReadData();
            void vDisplayData();
            void vCalculateGrade();
    };
}
void nStudentClass::cStudentClass::vReadData()
{
    std::cout<<"enter roll number"<<std::endl;
    std::cin>>iRollNum;
    std::cout<<"enter name"<<std::endl;
    std::cin>>strName;
    std::cout<<"enter marks"<<std::endl;
    std::cin>>fMarks;
}
void nStudentClass::cStudentClass::vDisplayData()
{
    std::cout<<std::setw(10)<<"rollnumber = "<<iRollNum<<std::endl;
    std::cout<<std::setw(13)<<"name = "<<strName<<std::endl;
    std::cout<<std::setw(13)<<"marks = "<<fMarks<<std::endl;
}
void nStudentClass::cStudentClass::vCalculateGrade()
{
    if(fMarks<35)std::cout<<std::setw(14)<<"grade = fail"<<std::endl;
    else if(fMarks>=35&& fMarks<=50)std::cout<<std::setw(14)<<"grade = D"<<std::endl;
    else if(fMarks>50&& fMarks<=65)std::cout<<std::setw(14)<<"grade = C"<<std::endl;
    else if(fMarks>65&& fMarks<=75)std::cout<<std::setw(14)<<"grade = B"<<std::endl;
    else if(fMarks>75)std::cout<<std::setw(14)<<"grade = A"<<std::endl;
}
int main()
{
    nStudentClass::cStudentClass objStu;
    objStu.vReadData();
    objStu.vDisplayData();
    objStu.vCalculateGrade();
}