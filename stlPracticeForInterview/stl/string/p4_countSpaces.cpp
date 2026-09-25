#include<iostream>
#include<string>

class spaceCount
{
    private:
        std::string ip;
    public:
        spaceCount()
        {
            std::cout<<"Fill Data\n";
            getline(std::cin,ip);
        }
        void countSpace()
        {
            int count=0;
            for(int i=0;i<ip.length();i++)
            {
                if(ip[i]==' ')
                {
                    count++;
                }
            }
            std::cout<<"Number of spaces = "<<count<<std::endl;
        }
};
int main()
{
    spaceCount sp;
    sp.countSpace();
}