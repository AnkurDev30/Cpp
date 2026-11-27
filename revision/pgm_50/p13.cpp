/**
Program 9: Implement Rule of Three

Create a class DynamicMemory containing a dynamically allocated integer array.

Implement:
1. Constructor
2. Destructor
3. Copy constructor
4. Copy assignment operator
Test:
- Object creation.
- Copy initialization.
- Copy assignment.
- Self-assignment (obj = obj).
- Verify there is no memory leak or shallow copy.
*/


#include<iostream>

class ruleOf3 
{
    private:
        int *p = nullptr;
    public:
        //Constructor
        ruleOf3()
        {
            std::cout<<"default construtor\n";
            p = nullptr;
        }
        ruleOf3(int data)
        {
            p = new int (data);
        }
        //copy construtor
        ruleOf3(ruleOf3 &obj)
        {
            std::cout<<"copy construtor\n";
            p = new int(*obj.p);
        }
        //copy assigment operator
        ruleOf3& operator =(ruleOf3 &obj)
        {
            if(this!=&obj)
            {
                int *temp = new int(*obj.p);
                delete p;
                p = nullptr;
                p = temp;
            }
            else
            {
                std::cout<<"Self-assignment\n";
            }
            return *this;
        }
        void display(const char* str)
        {
            std::cout<<"p value of "<<str<<" = "<<*p<<std::endl;
        }
        void modify(int value)
        {
            *p = value;
        }
        ~ruleOf3()
        {
            std::cout<<"destrutor\n";
            delete p;
            p = nullptr;
        }
};
int main()
{
  /**
    - Object creation.
    - Copy initialization.
    - Copy assignment.
    - Self-assignment (obj = obj).
    - Verify there is no memory leak or shallow copy.
  */ 
  
  ruleOf3 r1(5);//Object creation.
  r1.display("r1");

  ruleOf3 r2 = r1;//Copy initialization.
  r2.display("r2");

  ruleOf3 r3;
  r3 = r2; //Copy assignment.
  r3.display("r3");

  r1 = r1;//Self-assignment

  r2.modify(11);

  r2.display("r2");
  r3.display("r3");

  std::cout<<"if r2 and r3 are not same value we can say no shallow copy\n";


  
}