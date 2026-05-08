/**************************************************************
    3. Student marks comparison
    Class: Student
    Members: marks
    Function: compare(Student) → return object with higher marks.

    date: 16 Feb 2025

***************************************************************/  

//!< header file
#include<iostream>
#include<string>
//!< namespace defination.
namespace nStudentMarksComapre
{
    //!< class defination.
    class cStudentMarksComapre
    {
        //!< data members.
        private:
            int marks;
        public:
            //!< default constructor
            cStudentMarksComapre():marks(0){}

            //!< constuctor define
            explicit cStudentMarksComapre(int num):marks(num){}
            //!< compare function declaration. 
            cStudentMarksComapre objCompareMarks(cStudentMarksComapre obj);
            int iGetMarks()
            {
                return marks;
            }
    };
    //!< compare function defination outside of class.
    cStudentMarksComapre cStudentMarksComapre:: objCompareMarks(cStudentMarksComapre obj)
    {
        //!< local object 
        cStudentMarksComapre tempObject;
        //!< if current object have more marks.
        if(this->marks>obj.marks)
        {
            tempObject.marks = this->marks;
        }
        else //!< if another object have more marks.
        {
            tempObject.marks = obj.marks;
        }
        return tempObject;
    }
}
//!< main function defination.
int main()
{
    //!< local variable.
    int m1,m2;
    //!< local object 
    nStudentMarksComapre::cStudentMarksComapre mainObject;

    //!< getting input.
    std::cout<<"enter first student marks"<<std::endl;
    std::cin>>m1;
    //!< first object creation and pass the value.
    nStudentMarksComapre::cStudentMarksComapre obj1(m1);
    
    //!< getting input.
    std::cout<<"enter second student marks"<<std::endl;
    std::cin>>m2;
    //!< second object creation and pass the value.
    nStudentMarksComapre::cStudentMarksComapre obj2(m2);

    //!< calling compare function.
    mainObject = obj2.objCompareMarks(obj1);

    //!< output.
    std::cout<<"maximum marks  = "<<mainObject.iGetMarks()<<std::endl;

    return 0;
}

