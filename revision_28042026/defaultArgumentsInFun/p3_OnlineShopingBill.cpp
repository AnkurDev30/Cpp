/*  //////////////////////////////////////////////////
🧱 2. Online Shopping Bill

Create a function to calculate total bill.

👉 Requirements:

Price and quantity required
Discount should be optional (default value)
Delivery charge should also be optional
Final bill = price * quantity - discount + delivery

//////////////////////////////////////////// */

#include<iostream>
class ShoppingBill
{
    public:
        float FinalBillCaluclation
        (
            float price, 
            int quantity,
            float discount =0.0,
            float delivaryCharge=0.0
        );
};
float ShoppingBill::FinalBillCaluclation
(
    float price, 
    int quantity,
    float discount ,
    float delivaryCharge
)
{
    return (((price*quantity)+delivaryCharge)-discount);
}
int main()
{
    ShoppingBill shpObj;
    float price;
    int   quantity;
    float discount;
    float delivaryCharge;

    float finalBill;

    int optforDiscount;
    int optforDelivery;
    int optMore;
    do 
    {
        std::cout<<"enter price of product"<<std::endl;
        std::cin>>price;

        std::cout<<"enter quantity of product"<<std::endl;
        std::cin>>quantity;

        std::cout<<"do you need delivery?0 for no, 1 for yes."<<std::endl;
        std::cin>>optforDelivery;

        std::cout<<"is discount applicable?0 for no, 1 for yes."<<std::endl;
        std::cin>>optforDiscount;

        if(optforDelivery == 1)
        {
            std::cout<<"enter delivary charges"<<std::endl;
            std::cin>>delivaryCharge;
        }
        else
        {
            delivaryCharge=0.0;
        }

        if(optforDiscount == 1)
        {
            std::cout<<"enter discount ammount"<<std::endl;
            std::cin>>discount;
        }
        else
        {
            discount = 0.0;
        }


    
        finalBill= shpObj.FinalBillCaluclation
        (
            price, 
            quantity,
            discount,
            delivaryCharge
            
        ) ;
 
        std::cout<<"final bill = "<<finalBill<<std::endl;

        std::cout<<"for more bills press 1 otherwise press 0"<<std::endl;
        std::cin>>optMore;
    }
    while(optMore==1);
    return 0;
}