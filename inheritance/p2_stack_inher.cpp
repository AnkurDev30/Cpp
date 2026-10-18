#include<iostream>

#define max 10

class Stack 
{
    protected :
        int arr[max];
        int top;
    public:
        Stack()
        {
            top =-1;
        }
        void push(int num)
        {
            top++;
            arr[top]=num;
        }
        int pop()
        {
            int num = arr[top];
            top--;
            return num;
        }
};
class newStack : public Stack
{
    public:
        bool isFull()
        {
            if(top==max)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isEmpty()
        {
            if(top ==-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    newStack n1;

    while(1)
    {
        if(n1.isFull()!=true)
        {
            int a;
            std::cout<<"enter data for push\n";
            std::cin>>a;
            n1.push(a);
        }
        else 
        {
            std::cout<<"stack is full\n";
        }
        char opt;
        std::cout<<"enter more operation, press any key for exit press\n";
        std::cin>>opt;
        if(opt == '1')
        {
            break;
        }
    }
    std::cout<<"print satck\n";

    while(1)
    {
        int data  = n1.pop();
        std::cout<<"data : "<<data<<"\n";

        if(n1.isEmpty()==true)
        {
            std::cout<<"stack complete\n";
            break;
        }
    }
}