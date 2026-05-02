/*
🧱 10. Smart Calculator

Create a function:

👉 Requirements:

Accept 2 numbers
Operation type default = addition
Allow user to pass operation (add, sub, mul, div)
*/
#include<iostream>

class smartCalculator
{
    public:
        int divFlagHandle ;
        int smartCalculatorFun(int a,int b,std::string operatrion="add");
};
int smartCalculator::smartCalculatorFun(int a,int b,std::string operatrion)
{
    int result = 0;
    divFlagHandle =0;
    if(operatrion == "Add"||operatrion == "add"||operatrion == "ADD"||operatrion == "+")
    {
        result = a+b;
    }
    else if(operatrion == "Sub"||operatrion == "sub"||operatrion == "SUB"||operatrion == "-")
    {
        result = a-b;
    }
    else if(operatrion == "Mul"||operatrion == "mul"||operatrion == "MUL"||operatrion == "*")
    {
        result = a*b;
    }
    else if(operatrion == "Div"||operatrion == "div"||operatrion == "DIV"||operatrion == "/")
    {
        if(b!=0)
        {
            result = a/b;
        }
        else
        {
            divFlagHandle=1;
            std::cout<<"divide by zero not possible"<<std::endl;

        }
        
    }
    else
    {
        std::cout<<"wrong operation select"<<std::endl;
    }
    return result;
}
int main()
{
    smartCalculator obj;
    int a,b;
    int result;
    std::string oper;

    std::cout<<"enter operation :\n Add for +\n Sub for -\n Mul for *\n Div for /"<<std::endl;
    std::cin>>oper;

    std::cout<<"enter two numbers"<<std::endl;
    std::cin>>a>>b;

    if(oper != "Add"||oper != "add"||oper != "ADD"||oper != "+")
    {
        result = obj.smartCalculatorFun(a,b,oper);
        if(obj.divFlagHandle == 0)
        {
            std::cout<<a<<" "<<oper<<" "<<b<<" = "<<result<<std::endl;
        }
        
    }
    else
    {
        result = obj.smartCalculatorFun(a,b);
        std::cout<<a<<" "<<"+"<<" "<<b<<" = "<<result<<std::endl;
    }

return 0;
}