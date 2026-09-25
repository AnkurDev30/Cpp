/**
🧱 5. Bank Withdrawal System

Create a withdrawal function.

👉 Requirements:

Withdrawal amount required
Minimum balance should have default value
Transaction charge optional
Validate if withdrawal is allowed
 */

 #include<iostream>
 class WithdrawalOperation
 {
    public:
        bool ValidateWithdrawal(int accountBal,int withAmmount,int minBal=1000,int transactionChrg=100);
 };

 bool WithdrawalOperation::ValidateWithdrawal
 (
    int accountBal,int withAmmount,int minBal,int transactionChrg
 )
 {
    bool validate=false;
    int calcAmmount = accountBal-(transactionChrg+withAmmount);

  //  std::cout<<"calcAmmount "<<calcAmmount<<std::endl;
    if((calcAmmount)>=minBal)
    {
        validate = true;
    }
    return validate;
 }

 int main()
 {
    WithdrawalOperation obj;
    int withAmmount =0;
    int accountBal =0;
    int minBal;
    int transactionChrg;
    int optreq;
    bool validateWithOperation=false;

    std::cout<<"enter account balance"<<std::endl;
    std::cin>>accountBal;

    std::cout<<"enter withdrawal ammount"<<std::endl;
    std::cin>>withAmmount;

    std::cout<<"minimum balance enter required"<<std::endl;
    std::cin>>optreq;
    if(optreq==1)
    {
        std::cout<<"enter minimum balance"<<std::endl;
        std::cin>>minBal;
    }
    else
    {
     minBal =1000;   
    }

    std::cout<<"minimum transaction chrg required"<<std::endl;
    std::cin>>optreq;
    if(optreq==1)
    {
        std::cout<<"enter transaction chrg"<<std::endl;
        std::cin>>transactionChrg;
    }
    else
    {
     transactionChrg =100;   
    }    
  

    validateWithOperation = obj.ValidateWithdrawal(accountBal,withAmmount,minBal,transactionChrg);

    if(validateWithOperation==true)std::cout<<"withdrawal operation correct"<<std::endl;
    else std::cout<<"withdrawal operation not correct"<<std::endl;
    return 0;
 }