//Find prime numbers in a range
//functions, loops, optimization

#include<iostream>
#include<stdexcept>
#include<vector>
class primeNumber
{
    private:
        int primeNumL;
        int primeNumH;
        std::vector<int>vec;
        void takeIp();
        void checkPrimeNum();
        void printData();
    public:
        
        void calcPrime()
        {
            takeIp();
            checkPrimeNum();
            printData();         
        }
};
void primeNumber::takeIp()
{
    std::cout<<"enter lower range\n";
    std::cin>>primeNumL;
    std::cout<<"enter higher range\n";
    std::cin>>primeNumH;
}
void primeNumber::checkPrimeNum()
{
    int count =0;
    try{
        if(primeNumL<0 )
            throw ("primeNumL is below range\n");
        if(primeNumH<primeNumL )
            throw ("primeNumH is outof range\n");

        for(int i=primeNumL ;i<primeNumH;i++)
        {
            count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                vec.push_back(i);
            }
        }
    }
    catch(const std::string *msg)
    {
        std::cout<<msg<<std::endl;
    }
}
void primeNumber::printData()
{
    if((vec.empty()))
    {
        std::cout<<"vector not empty\n";
    }
    else
    {
        std::cout<<"print prime numbers\n";
        for(auto m:vec)
        {
            std::cout<<m<<" ";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    primeNumber pmObj;
    pmObj.calcPrime();

}