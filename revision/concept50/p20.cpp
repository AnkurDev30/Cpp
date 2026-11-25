//Implement operator overloading for comparing two objects using ==.

#include<iostream>

class validateObject 
{
    private:
        int x;
    public:
        validateObject(int X):x(X){}
        bool operator ==(validateObject &obj)
        {
            
            if(this->x == obj.x)
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
    validateObject v1(7),v2(7);
    if(v1==v2)
    {
        std::cout<<"both object are equal\n";
    }
    else
    {
        std::cout<<"both object are not equal\n";
    }

}