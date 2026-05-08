/********************************************************************************************
8. Product Class

Create a class Product with:

productId

price

quantity

Member functions:

read()

calculateTotal()

display()
*********************************************************************************************/
//!< header file
#include<iostream>
#include<iomanip>
//!< namespace defination for Product Class.
namespace nProductClass
{
    //!< class defination.
    class cProductClass
    {
        private:
            //!< data members
            int productID;
            int price;
            int quantity;
            int total;
        public:
            //!< construction defination.
            explicit cProductClass(int p,int m,int q)
            :productID(p),price(m),quantity(q){}
            //!< members functions
            void vCalculateTotal();
            void vDisplay();
    };

    //!< function defination outside of class
    //!< calculation function
    void cProductClass::vCalculateTotal()
    {
        //!< total amount calculation
        total = quantity*price;
    }
    //!< display function
    void cProductClass::vDisplay()
    {
        std::cout<<"total = "<<total<<std::endl;
    }
}
/*********************************************************************
9. Car Class

Create a class Car with:

speed

Member functions:

accelerate()

brake()

displaySpeed()
*********************************************************************/
//!< namespace defination.
namespace nCar
{
    //!< class defination.
    class cCar
    {
        private:
            //!< data members.
            int speed;
        public:
            //!< construction.
            explicit cCar(int initSpeed):
            speed(initSpeed){}
            //!< member functions.
            void accelerate(int speedIncRate);
            void brake(int speedDecRate);
            void displaySpeed();
    };
    //!< function for accelerate speed.
    void nCar::cCar::accelerate(int speedIncRate)
    {
        for(int i=1;i<speedIncRate;i++)
        {
            speed++;
        }
    }
    //!< function for brake car.
    void nCar::cCar::brake(int speedDecRate)
    {
        for(int i=1;i<speedDecRate;i++)
        {
            speed--;
        }
    }
    //!< function for display speed.
    void nCar::cCar::displaySpeed()
    {
        std::cout<<"now speed = "<<speed<<std::endl;
    }
}

/*****************************************************************************
10. TemperatureClass

Create a class Temperature with:

celsius

Member functions:

setValue()

toFahrenheit()

display()

****************************************************************************/
//!< namespace defination
namespace nTemperatureClass
{
    //!< class defination
    class cTemperatureClass
    {
        //!< data members
        private:
            float celsius;
            float Fahrenheit ;
        public:
        //!< member functions
            void setValue();
            void toFahrenheit();
            void display();
    };
    //!< function for taking celsius value.
    void nTemperatureClass::cTemperatureClass::setValue()
    {
        std::cout<<"enter temperature in celsius"<<std::endl;
        std::cin>>celsius;
    }
    //!< function for converting celsius value to fahrenheit.
    void nTemperatureClass::cTemperatureClass::toFahrenheit()
    {
        //!< converstion logic.
         Fahrenheit = ((celsius*9/5)+32);
    }
    //!< function for display celsius value and fahrenheit value.
    void nTemperatureClass::cTemperatureClass::display()
    {
        std::cout<<std::fixed<<std::setprecision(2)<<"temperature in celsius = "<<celsius<<std::endl;
        std::cout<<std::fixed<<std::setprecision(2)<<"temperature in fahrenheit = "<<Fahrenheit<<std::endl;
    }
}
//!< function prototype.
void vProductIdCallingFunction();
void vCarSpeedRelatedFunction();
void vTemperatureConversionFunction();
/************************************************************ *
Function : main
Description : main function, control the functionality.

************************************************************/
int main()
{
    //!< local variable.
    int opt = 0;
    //!< input from user.
    std::cout<<"select option "<<std::endl;
    std::cout<<"1)  Product Class"<<std::endl;
    std::cout<<"2)  Car Class"<<std::endl;
    std::cout<<"3)  Temperature Class"<<std::endl;
    std::cin>>opt;

    //!< selection logic.
    if(opt == 1)
    {
        //!< product class functionality.
        vProductIdCallingFunction();
    }
    else if(opt == 2)
    {
        //!< car class functionality.
        vCarSpeedRelatedFunction();
    }
    else if(opt == 3)
    {
        //!< temperature handling.
        vTemperatureConversionFunction();
    }
}
/******************************************************************
function    :   vProductIdCallingFunction.
description :   This function call the object of Product Class.
*******************************************************************/
void vProductIdCallingFunction()
{
    //!< local variable.
    int p,m,q;
    //!< collect input.
    std::cout<<"enter product id:"<<std::endl;
    std::cin>>p;
    std::cout<<"enter price of product:"<<std::endl;
    std::cin>>m;
    std::cout<<"enter no of quantity of product:"<<std::endl;
    std::cin>>q;
    //!< object creation and pass input.
    nProductClass::cProductClass objProduct(p,m,q);
    //!< calling function for calculate total.
    objProduct.vCalculateTotal();
    //!< display function for total
    objProduct.vDisplay();
}
/******************************************************************
function    :   vCarSpeedRelatedFunction.
description :   This function call the object of Car class.
*******************************************************************/
void vCarSpeedRelatedFunction()
{
    //!< local variable
    int initialSpeed = 0;
    int incRate,decRate;

    //!< input taking
    std::cout<<"enter start speed"<<std::endl;
    std::cin>>initialSpeed;
    nCar::cCar objCar(initialSpeed);

    //!< calling for accelerate speed
    std::cout<<"enter inc rate for accelerate speed"<<std::endl;
    std::cin>>incRate;
    objCar.accelerate(incRate);
    objCar.displaySpeed();

    //!< calling for brake vehicle
    std::cout<<"enter dec rate for brake car"<<std::endl;
    std::cin>>decRate;
    objCar.brake(decRate);
    objCar.displaySpeed();
}
/******************************************************************
function    :   vTemperatureConversionFunction.
description :   This function call the object of TemperatureClass class.
*******************************************************************/
void vTemperatureConversionFunction()
{
    //!< namespace defination.
    nTemperatureClass::cTemperatureClass objTemperatureClass;

    //!< function for input collection.
    objTemperatureClass.setValue();

    //!< function for conversion logic
    objTemperatureClass.toFahrenheit();

    //!< output function.
    objTemperatureClass.display();
}