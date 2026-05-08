/**********************************************************************************

5. Distance addition

Class: Distance
Members: meter, cm
Function: addDistance(Distance) → return object

Date : 16 feb 2025
**********************************************************************************/

//!< header file.

#include<iostream>


//!< namespace defination.
namespace nDistance
{
    //!< class defination
    class cDistance
    {
        //!< data member.
        private:
            int meter;
            int cm;
        public:
        //!< default constructor.
            cDistance():meter(0),cm(0){}
            explicit cDistance(int m,int c): meter(m),cm(c){}
        //!< member functions.
            void Display(cDistance obj)
            {
                std::cout<<"total distance "<<obj.meter<<" meter and "<<cm<<" cm"<<std::endl;
            }
        //!< function defination.
            cDistance AddDistance(cDistance obj)
            {
                cDistance retObj;
    
                retObj.meter = this->meter+obj.meter;
                retObj.cm = this->cm+obj.cm;

                //!< meter to cm conversion.
                if(retObj.cm>=100)
                {
                    int cmToMeter = 0;
                    int rem = 0;

                    cmToMeter = retObj.cm / 100;
                    rem = retObj.cm % 100;
                    retObj.cm = rem;

                    retObj.meter = retObj.meter+cmToMeter;
                }
                //!< return object
                return retObj;
            }
    };
}
//!< main function
int main()
{
    //!< local variable.
    int meter;
    int cm;

    //!< local object 
    nDistance::cDistance obj3;
    //!< input receive for obj 1
    std::cout<<"enter meter value for first obj"<<std::endl;
    std::cin>>meter;

    std::cout<<"enter cm value for first obj"<<std::endl;
    std::cin>>cm;

    //!< obj1 creation.
    nDistance::cDistance obj1(meter,cm);

    //!< input receive for obj 2
    std::cout<<"enter meter value for second obj"<<std::endl;
    std::cin>>meter;

    std::cout<<"enter cm value for second obj"<<std::endl;
    std::cin>>cm;

    //!< second obj creation.
    nDistance::cDistance obj2(meter,cm);  

    //!< addition function calling.
    obj3 = obj2.AddDistance(obj1);

    //!< display function.
    obj3.Display(obj3);
}