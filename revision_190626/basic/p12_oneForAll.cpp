//Note this program have bug need to fix.

/*
Leap year
Power calculation
Decimal to Binary
Binary to Decimal
Calculator
Menu driven program
*/
#include<stack>
#include<iostream>
void leapYear(int y)
{
    if(y%4 == 0)
    {
        std::cout<<"leap year\n";
    }
    else
    {
        std::cout<<"not leap year\n";
    }
}
void powerCalc(int num,int power)
{
    long long numP=0;
    for(auto a=0;a<power;a++)
    {
        numP*=num;
    }
    std::cout<<num<<" power of "<<power<<" = "<<numP<<std::endl;
}
void decimalToBin(int n)
{
    std::stack<int>st;
    int r;
    for(auto a = 0;n;a++)
    {
        r = n%2;
        n = n/10;
        st.push(r);
    }
    for(auto a=0;st.empty();a++)
    {
        std::cout<<st.top();
    }
    std::cout<<std::endl;
}
void BinaryToDecimal(int n)
{
    int r;
    int deci;
    int power=1;
    for(auto a=0;n;a++)
    {
        r=n%10;
        deci = r*power+deci;
        power =power*2;
        n=n/10;
    }
    std::cout<<"Decimal ="<<deci<<std::endl;
}
int main()
{
    {
    int n;
    std::cout<<"enter year\n";
    std::cin>>n;
    leapYear(n);
    }

    {
    int power, num;
    std::cout<<"enter num\n";
    std::cin>>num;
    std::cout<<"enter year\n";
    std::cin>>power;
    powerCalc(num,power);
    }

    {
    int decimal;
    std::cout<<"enter decimal num\n";
    std::cin>>decimal;
    decimalToBin(decimal);
    }

    {
    int bina;
    std::cout<<"enter binary num\n";
    std::cin>>bina;
    BinaryToDecimal(bina);
    }
}