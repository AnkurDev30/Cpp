/******************************************************************
Program demonstrating use of a constructor with 
the this pointer to initialize student 
data members (id and marks) and display the values 
using a class member function
******************************************************************/
//!< header file
#include<iostream>

//!< namespace defination
namespace nConstructorWith_this
{
    //!< class definations
    class cStudent
    {
        //!< data members.
        private:
            int id;
            float marks;
        public:
        //!< construction
            cStudent(int a,int b)
            {
                this->id = a;
                this->marks = b;
            }
        //!< display function
            void display()
            {
                std::cout<<"id ="<<id<<std::endl;
                std::cout<<"marks = "<<marks<<std::endl;
            }
    
    };
}
int main()
{
    //!< object creation
    nConstructorWith_this::cStudent object(7,9);

    //!< display function calling for output
    object.display();

}