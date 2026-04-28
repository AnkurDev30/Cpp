/*---------------------------------------------
Problem 1 — Student Records

Class: Student
Members: name, marks
Task:

Create array of 5 students

Input data

Display student with highest marks

Date : 18-02-2025
-----------------------------------------------*/
//!< header file decalarion.
#include<iostream>
#include<string>
#include<iomanip>

#define NoOfStu 5
//!< namespace define
namespace nStudentRecord
{
    //!< class should be part of namespace due to avoid name colligien.
    class cStudentRecord
    {
        //!< not able to read data outside the class: private
        private:
            std::string name;
            int marks;
        public://!< can use outside the class
            void getData(int noOfStudent);
            int  getMarks();
            void displayData(int no)const;
    };
    //!< read input.
    void cStudentRecord::getData(int noOfStudent)
    {
        std::cout<<"enter name of student no.: "<<noOfStudent<<std::endl;
        std::cin>>name;
        std::cout<<"enter marks of student no.:"<<noOfStudent<<std::endl;
        std::cin>>marks;        
    }
    //!< display output.
    void cStudentRecord::displayData(int no)const
    {
        std::cout<<std::setw(20)<<no<<"). Name: "<<name<<" marks:"<<marks<<std::endl;
    }
    //!< get marks for comparsion
    int cStudentRecord::getMarks()
    {
        return marks;
    }
}
//!< main function
int main()
{
    //!< array of object crreation.
    nStudentRecord::cStudentRecord objects[NoOfStu];

    //!< get data.
    for(int i=0;i<NoOfStu;i++)
    {
        objects[i].getData(i+1);
    }
    //!< display data.
    for(int i=0;i<NoOfStu;i++)
    {
        objects[i].displayData(i+1);
    }
    //!< highest marks calculation. 
    int marks = objects[0].getMarks();
    int no=0;
 
    for(int i=0;i<NoOfStu;i++)
    {
        if(marks < objects[i].getMarks())
        {
            marks = objects[i].getMarks();
            no = i;
        }
            
    }
    //!< display output.
    std::cout<<"higest marks = "<<marks<<" of student no: "<<no+1<<std::endl;
    return 0;
}