/*
    16. Payment Gateway System
    Concepts:
    runtime polymorphism
    base pointer
*/
#include<iostream>
class payment 
{
    public:
       
        virtual void paymentMethod()=0; 
};
class deposit
{
    public:
    int totalAccountBalance;
    void depositAmmount()
    {
        std::cout<<"enter deposit ammount\n";
        std::cin>>totalAccountBalance;
    }
    void displayBalane()
    {
        std::cout<<"current balance = "<<totalAccountBalance<<std::endl;
    }
};
deposit dep;

class UPI: public payment
{
    public:
         void paymentMethod() override
         {
            int ammount;
            int opt=0;

            std::cout<<"enter amount via UPI payment\n";
            std::cin>>ammount;
            dep.totalAccountBalance -= ammount;

            std::cout<<"want to print current balance\npress 1\n";
            std::cin>>opt;
            if(opt == 1)
            {
                dep.displayBalane();
            }

         } 
};
class creditCard: public payment, public deposit 
{
    public:
         void paymentMethod() override
         {
            int ammount;
            int opt=0;

            std::cout<<"enter amount via credit card payment\n";
            std::cin>>ammount;
            dep.totalAccountBalance -= ammount;

            std::cout<<"want to print current balance\npress 1\n";
            std::cin>>opt;
            if(opt == 1)
            {
                dep.displayBalane();
            }
         } 
};
class netBanking: public payment, public deposit
{
    public:
         void paymentMethod() override
         {
            int ammount;
            int opt=0;

            std::cout<<"enter amount via net banking payment\n";
            std::cin>>ammount;
            dep.totalAccountBalance -= ammount;

            std::cout<<"want to print current balance\npress 1\n";
            std::cin>>opt;
            if(opt == 1)
            {
                dep.displayBalane();
            }

         } 
};
int main()
{
    int paymentSelectionMethod;
    payment *obj;
    //deposit depObj;

    do 
    {

        std::cout<<"select payment method"<<std::endl
        <<"1. deposit ammount"<<std::endl
        <<"2. bill pay by UPI"<<std::endl
        <<"3. bill pay by credit card"<<std::endl
        <<"4. bill pay by net banking"<<std::endl
        <<"5. display balance"<<std::endl;
        std::cin>>paymentSelectionMethod;

        if(paymentSelectionMethod == 1)
        {

            dep.depositAmmount();
        }
        else if(paymentSelectionMethod == 2)
        {
            UPI upiObj;
            obj = &upiObj;
            obj->paymentMethod();
        }
        else if(paymentSelectionMethod == 3)
        {
            creditCard ccObj;
            obj = &ccObj;
            obj->paymentMethod();
        }
        else if(paymentSelectionMethod == 4)
        {
            netBanking netObj;
            obj = &netObj;
            obj->paymentMethod();
            std::cout<<"wrongSelection\n";
        }
        else if(paymentSelectionMethod == 5)
        {
            dep.displayBalane();
        }
        else 
        {
            std::cout<<"wrongSelection\n";
        }
    }while(!(paymentSelectionMethod>5 || paymentSelectionMethod<1));
    
    return 0;
}