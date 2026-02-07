/********************************************************************
Program demonstrating method chaining using the this pointer.
A Counter class is created with a private count variable and 
member functions increment(), decrement(), and display(). 
The increment() and decrement() functions return this to allow
*******************************************************************/

//!< header files
#include<iostream>

//!< class defination
 class cCounter
 {
    private:
        //!< data members
        int count = 0;
    public:
        cCounter():count(0) {}
        cCounter* Inc()
        {
            count++;
            return this;
        }
        cCounter* Dec()
        {
            count--;
            return this;
        }
        void display()
        {
            std::cout<<"count value "<<count<<std::endl;
        }
 };
 int main()
 {
    cCounter obj;
    //fisrt chain.
    obj.Inc()->Inc()->display();

    //!< second chain
    obj.Inc()->Dec()->display();

    //!< third Chain
    obj.Dec()->Dec()->display();

 }