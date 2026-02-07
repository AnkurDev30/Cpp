/*******************************************************
This program we are learning how can we use this pointer
inside of class
*******************************************************/

//!< header files
#include<iostream>


//!< naemsapce defination
namespace nThisPointerDemo
{
    //!< class defination
    class cNumber
    {
        private:
            //!< data members
            int value;
        public:
        /* there function argument and data member are same  */
            void setValue(int value)
            {
                this->value = value;
            }

            void display();
    };
    void cNumber::display()
    {
        std::cout<<"value update by set value"<<value<<std::endl;
    }
}
//!< main calling function
int main()
{
    nThisPointerDemo::cNumber object;
    object.setValue(7);
    object.display();    

}
