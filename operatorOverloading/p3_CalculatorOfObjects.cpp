//basic calculator of objects

#include<iostream>

namespace calculator
{
    class _calc
    {
        public:
            int _var;
            _calc(int v):_var(v){};
            int operator +(_calc c1)
            {
                return (this->_var+c1._var);
            }
            int operator -(_calc c1)
            {
                return (this->_var-c1._var);
            }
            int operator *(_calc c1)
            {
                return (this->_var*c1._var);
            }
            int operator /(_calc c1)
            {
                if(c1._var!=0)return (this->_var/c1._var);
                else
                    {
                        std::cout<<"divide by zero not possible\n";
                        return 0;
                    }
            }    
            int operator %(_calc c1)
            {
                if(this->_var>c1._var)
                {
                    return (this->_var%c1._var);
                }
                else
                {
                    std::cout<<"second one should not be more than first\n";
                    return 0;
                }
            }
     
    };
}
int main()
{
    int p;
    std::cout<<"enter value for object 1\n";
    std::cin>>p;
    calculator::_calc C1(p);

    std::cout<<"enter value for object 2\n";
    std::cin>>p;
    calculator::_calc C2(p);

    int option=0;
    int result;

    std::cout<<"enter option for calculator\n"<<
    "1. for Add\n"<<"2. for Sub\n"<<"3. for Mul\n"<<
    "4. for Div\n"<<"5. for Rem\n";
    std::cin>>option;

    switch(option)
    {
        case 1:
            result = C1+C2;
        break;
        case 2:
            result = C1-C2;
        break;
        case 3:
            result = C1*C2;
        break;
        case 4:
            result = C1/C2;
        break;
        case 5:
            result = C1%C2;
        break;
        default:
            std::cout<<"wrong selection\n";
        break;
    }
    std::cout<<"result = "<<result<<"\n";
}