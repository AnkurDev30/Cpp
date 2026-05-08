/*
🧱 4. Banking Interest System
Requirements:

Base:

Account -> interest()

Derived:

SavingAccount
CurrentAccount
*/

#include<iostream>
class account
{
    public:
        virtual void intrest()
        {
            std::cout<<"account class"<<std::endl;
        }
};
class savingAccount: public account
{
    public:
        void intrest()
        {
            std::cout<<"savingAccount class"<<std::endl;
        }
};
class currentAccount: public account
{
    public:
        void intrest()
        {
            std::cout<<"CurrentAccount class"<<std::endl;
        }
};

int main()
{
    savingAccount s1;
    account *p = &s1;
    p->intrest();
}