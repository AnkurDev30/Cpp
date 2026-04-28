/*---------------------------------------------
*Problem 6 — Dynamic Student Array
*
*Create class Student with marks.
*
*Task:
*
*Ask user number of students
*
*Allocate dynamically
*
*find average marks
*
*Date : 20-02-2025
-----------------------------------------------*/
//!< header files.
#include<iostream>

//!< namespace defination.
namespace nStudentMarks
{
    class cStudentMarks
    {
        private:
            int marks;
        public:
            void getMarks(int studentNo)
            {
                std::cout<<"enter marks of student number"<<studentNo+1<<std::endl;
                std::cin>>marks;
            }
            void diplayMarks(int studentNo)
            {
                std::cout<<"student no. "<<studentNo+1<<": Marks : "<<marks<<std::endl;
            }
            int getMarks()
            {
                return marks;
            }
    };
}
int main()
{
    //!< local variable
    int NoOfStudent = 0;
    int totalMarks = 0;
    //!< taking input for number of members.
    std::cout<<"enter no of student"<<std::endl;
    std::cin>>NoOfStudent;

    //!< create object pointer.
    nStudentMarks::cStudentMarks *obj;
    obj = new nStudentMarks::cStudentMarks[NoOfStudent];

    for(int i=0;i<NoOfStudent;i++)
    {
        obj[i].getMarks(i);
    }

    for(int i=0;i<NoOfStudent;i++)
    {
        obj[i].diplayMarks(i);
    }

    for(int i=0;i<NoOfStudent;i++)
    {
        totalMarks += obj[i].getMarks();
    }
    std::cout<<"average marks = "<<totalMarks/NoOfStudent<<std::endl;
    //!< deallocated memory.
    delete[] obj;
}