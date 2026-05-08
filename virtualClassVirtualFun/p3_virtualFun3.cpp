/**
🧱 4. Payment Gateway System
Requirements:

Base:

Payment -> pay()

Derived:

UPI
CreditCard
NetBanking

Use runtime polymorphism.
 */

 #include<iostream>
 class payment 
 {
    public:
        virtual void pay()
        {
            std::cout<<"base\n";
        }
 };
 class upi:public payment
 {
    public:
        void pay()
        {
            std::cout<<"upi gpay option\n";
        }
 };
  class creditCard:public payment
 {
    public:
        void pay()
        {
            std::cout<<"credit card paymentn\n";
        }
 };
class netBanking:public payment
 {
    public:
        void pay()
        {
            std::cout<<"net banking  paymentn\n";
        }
 };

 int main()
 {
    int option = 0;
    payment *p;
    int opt;
    upi u;
    creditCard c;
    netBanking n;
    std::cout<<"select payment method\n1. upi\n2. credit card\n3. net bankin\n";
    std::cin>>opt;

    switch(opt)
    {
        case 1:
            
            p=&u;
            p->pay();
        break;
        case 2:
            
            p=&c;
            p->pay();
        break;
        case 3:
            
            p=&n;
            p->pay();
        break;
        default:
            std::cout<<"select correct o/p\n";
        break;
    }
 }