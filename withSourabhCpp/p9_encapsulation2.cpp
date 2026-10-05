#include<iostream>

class evenOdd
{
    public:
        int n;
        void checkEvenOdd()
        {
            std::cout<<"enter a num\n";
            std::cin>>n;
            if(n%2==0)
            {
                std::cout<<"even = "<<n<<std::endl;
                return;
            }
            std::cout<<"odd = "<<n<<std::endl;
        }
};

int main()
{
    evenOdd e[5];
   
    for(int i=0;i<5;i++)
    {
        e[i].checkEvenOdd();
    }

}