/**********************************************************************************

6. Time addition

Class: Time
Members: hour, minute
Function: addTime(Time) → return object

Date : 17 feb 2025
**********************************************************************************/

//!< header files
#include<iostream>

//!< define namespace.
namespace nTimeAddition
{
    //!< class declaration.
    class cTimeAddition
    {
        //!< data memebers.
        private:
            int hours;
            int min;
        public:
            //!< default constructor.
            cTimeAddition():hours(0),min(0){}
            //!< parameterized constructor.
            explicit cTimeAddition(int h,int m):hours(h),min(m){}
            void vDispalyTimeFun(cTimeAddition obj)const;
            cTimeAddition objTimeAdditionFun(cTimeAddition obj);
    };
    //!< time display function defination.
    void cTimeAddition::vDispalyTimeFun(cTimeAddition obj)const
    {
        std::cout<<"time = "<<obj.hours<<" : "<<obj.min<<std::endl;
    }
    //!< time addition function defination.
    cTimeAddition cTimeAddition:: objTimeAdditionFun(cTimeAddition obj)
    {
        //!< local object.
        cTimeAddition objTemp;

        //!< time addition.
        objTemp.hours   = obj.hours + this->hours;
        objTemp.min     = obj.min + this->min;

        //!< hours to miniut conversion.
        if(objTemp.min >= 60)
        {
            int miniDiv     = objTemp.min / 60;
            objTemp.hours   = objTemp.hours + miniDiv;

            objTemp.min      = objTemp.min % 60;

        }
        //!< return object.
        return objTemp;

    }
}
//!< hours input taking function.
int hoursInput()
{
    int h;

    std::cout<<"enter hours"<<std::endl;
    std::cin>>h;
    if(h > 24)
    {
        std::cout<<"wrong hour enterd "<<std::endl;
        return 0;
    }

    return h;
}
//!< miniuts input taking function.
int MinInput()
{
    int m;

    std::cout<<"enter miniuts"<<std::endl;
    std::cin>>m;
    if(m > 59)
    {
        std::cout<<"wrong miniuts enterd "<<std::endl;
        return 0;
    }

    return m;
}
//!< main function defination.
int main()
{
    //!< local variable.
    int hr = hoursInput();
    int mi = MinInput();

    //!< temp object for collect output from addition function.
    nTimeAddition::cTimeAddition tempObj;

    //!< first object creation.
    nTimeAddition::cTimeAddition objTime1(hr,mi);

    //!< inputs for second object.
    hr = hoursInput();
    mi = MinInput();    

    //!< second object creation.
    nTimeAddition::cTimeAddition objTime2(hr,mi);

    //!< calling object 2 function and passing objTime1 as a parameter.
    tempObj = objTime2.objTimeAdditionFun(objTime1);

    //!< display function.
    tempObj.vDispalyTimeFun(tempObj);
}