/*****************************************************

 Add two numbers using objects

Class: Number
Members: a, b
Function: add(Number) → return object

****************************************************/

//!< header files.
#include<iostream>
#include<string>
#define CONST_OBJ1 "obj 1"
#define CONST_OBJ2 "obj 2"
#define CONST_OBJ3 "obj 3"

//!< namespace 
namespace nAddition
{
    //!< class defination.
    class cAdd
    {
        private: //!< data members.
            int a;
            int b;
        public:
            void vGetData() //!< member functions.
            {
                std::cout<<"enter varaible a:"<<std::endl;
                std::cin>>a;
                std::cout<<"enter variable b:"<<std::endl;
                std::cin>>b;
            }
            void vPrintData(std::string name = " ")
            {
                std::cout<<"variable 'a' of "<<name<<" value = "<<a<<std::endl;
                std::cout<<"variable 'b' of "<<name<<" value = "<<b<<std::endl;
            }
            cAdd cAddition(cAdd obj);
    };
    //!< function defination outside of class.
    cAdd cAdd::cAddition(cAdd obj)
    {
        cAdd object;
        object.a = this->a+obj.a;
        object.b = this->b+obj.b;
        return object;
    }
}
//!< member function
int main()
{
    //!< object creation
    nAddition::cAdd obj1;
    nAddition::cAdd obj2;
    nAddition::cAdd obj3;

    //!< calling functions.
    obj1.vGetData();
    obj1.vPrintData(CONST_OBJ1);

    obj2.vGetData();
    obj2.vPrintData(CONST_OBJ2);

    obj3 = obj1.cAddition(obj2);

    //!< print function.
    obj3.vPrintData(CONST_OBJ3);
}