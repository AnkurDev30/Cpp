/*
🎯 6. Product Billing System
Requirements:

Class Product

private:
item price
quantity

Friend class Billing

calculate total bill
apply discount
*/

#include<iostream>
class product 
{
    private:
        std::string item;
        int price;
        int quantity;
    public:
        friend class billing;
        void getData()
        {
            std::cout<<"enter item name\n";
            std::cin>>item;
            std::cout<<"enter item price\n";
            std::cin>>price;
            std::cout<<"enter item quantity\n";
            std::cin>>quantity;
        }
};
class billing
{
    public:
        int calculateBill(product &p1,int disscount =0);
};
int billing::calculateBill(product &p1,int disscount)
{
    int totalBill = p1.price*p1.quantity;
    totalBill = totalBill-disscount;
    return totalBill;
}
int main()
{
    product p;
    p.getData();
    billing b1;
    int discountopt=0;
    int bill;
    std::cout<<"discount  required="<<std::endl;
    std::cin>>discountopt;
    if(discountopt)
    {
        int discountRs;
        std::cout<<"discount  how  much "<<std::endl;
        std::cin>>discountRs;
        bill = b1.calculateBill(p,discountRs);
    }
    else
    {
        bill = b1.calculateBill(p);
    }
    std::cout<<"total bill = "<<bill<<std::endl;
    return 0;
}