//each class should have single responsibilities 
//class should work for one specific task multiple functions are allowed but they
//should related one task.
//like in uart-> Tx,Rx funtion

#include<iostream>
class singleResponsibiliyPrincipal
{
    private:
        void add();
        void sub();
        void mul();
        void div();
    public
        void calculator();
};