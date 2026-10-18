/*
    stack : LIFO  123 3 2 1

    push -> value fill
    pop -> remove
*/

#include<iostream>

#define max_val 10

class stack 
{
    protected:
        int array[max_val];
        int top =-1;
    public:
        void push()
        {
            int value;
            std::cout<<"enter value\n";
            std::cin>>value;
            top =top+1;
            array[top]=value;
        }

        int pop()
        {
            int value = array[top];
            top=top-1;

            return value;
        }

};
class newStack: public stack
{
    public:
        bool isFull()
        {
            if(top == max_val)
                return true;
            else return false;
        }
        bool isEmpty()
        {
            if(top ==-1)
                return true;
            else
                return false;
        }
};
int main()
{
    newStack n1;
    char a;
    while(1)
    {
        if(n1.isFull()==false)
        {
            n1.push();
        }

        std::cout<<"enter more? press any key\npress 1 for exit\n";
        std::cin>>a;

        if(a=='1')
            break;

        if(n1.isFull()==true)
            break;
    }

    while (1)
    {
        int val = n1.pop();
        std::cout<<val<<" ";
        if(n1.isEmpty()==true)
        {
            break;
        }
    }
    std::cout<<"\n thankyou!\n";

}


