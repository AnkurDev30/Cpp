/**
🧱 3. Product Billing
Requirements:

Constructor takes:

product name
quantity
price

Calculate total bill.
*/

#include<iostream>
class calculateBill
{
    private:
        std::string pName;
        int quantity;
        float price;
        float totalPrice;
    public:
        calculateBill()
        {
            std::cout<<"enter product name \n";
            std::cin>>pName;

            std::cout<<"enter quantity\n";
            std::cin>>quantity;

            std::cout<<"enter price\n";
            std::cin>>price;
        }
        void calculateTotalBill()
        {
            std::cout<<"display data\n";
            std::cout<<"product name = "<<pName<<std::endl;
            std::cout<<"price        = "<<price<<std::endl;
            std::cout<<"quantity     = "<<quantity<<std::endl;

            totalPrice = (float)price*quantity;
            std::cout<<"total price  = "<<totalPrice<<std::endl;
        }

};

int main()
{
    calculateBill c1;
    c1.calculateTotalBill();
}