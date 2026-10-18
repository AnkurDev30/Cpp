#include<iostream>

class user 
{
    private:
        char c;
        int i;
        float f;
        
    public:
        void displayData()
        {
            std::cout<<i<<"\n";
            std::cout<<f<<"\n";
            std::cout<<c<<"\n";
        }
};
int main()
{
    std::cout<<sizeof(user)<<std::endl;
    user u1;
    std::cout<<sizeof(u1)<<std::endl;
    u1.displayData();

}