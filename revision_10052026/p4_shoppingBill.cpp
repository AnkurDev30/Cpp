/**4. Shopping Bill System
Concepts:
default arguments
formatted output */

#include<iostream>
class shopingBill
{
    private:
        std::string prName;
        int quantity;
        float price;

        float totalAmmount(int Gst=18,int discount=0);
    public:
        shopingBill()
        {
            std::cout<<"enter product name\n";
            std::cin>>prName;
            std::cout<<"quantity\n";
            std::cin>>quantity;
            std::cout<<"price\n";
            std::cin>>price;
        }
        void printBill();
};
float shopingBill::totalAmmount(int Gst,int discount)
{

    float total =  quantity*price;
    total += ((total*18)/100.0);
    total = total-discount;
    return total;
}
void shopingBill:: printBill()
{
    int gstOpt,gstper;
    int disOpt,disAmt;
    float bill=0;
    std::cout<<"gst provide?\n";
    std::cin>>gstOpt;
    std::cout<<"discount provide?\n";
    std::cin>>disOpt;
    if(gstOpt!=0 && disOpt!=0)
    {
        std::cout<<"enter gst in percentage\n";
        std::cin>>gstper;

        std::cout<<"enter discount in rs\n";
        std::cin>>disAmt;
        bill =totalAmmount(gstper,disAmt);
    }
    else if(gstOpt!=0 && disOpt==0)
    {
        std::cout<<"enter gst in percentage\n";
        std::cin>>gstper;
        bill =totalAmmount(gstper);
    }
    else if(gstOpt==0 && disOpt!=0)
    {
        std::cout<<"enter discount in rs\n";
        std::cin>>disAmt;
        gstper=18;
        bill =totalAmmount(gstper, disAmt);
    }
    else
    {
        bill =totalAmmount();
    }
    std::cout<<"----------------------\n";
    std::cout<<"       shoping bill   \n";
    std::cout<<"----------------------\n";
    std::cout<<"product name : "<<prName<<std::endl;
    std::cout<<"quantity     : "<<quantity<<std::endl;
    std::cout<<"price        : "<<price<<std::endl;
    std::cout<<"----------------------\n";
    if(gstOpt!=0)
    {
    std::cout<<"gst %        : "<<gstper<<std::endl;
    }
    if(disOpt!=0)
    {
    std::cout<<"discount     : "<<disAmt<<std::endl;
    }
    std::cout<<"----------------------\n";
    std::cout<<"Total bill   : "<<bill<<std::endl;
    std::cout<<"----------------------\n";

}
int main()
{
//void shopingBill:: printBill()
    shopingBill s1;
    s1.printBill();
}