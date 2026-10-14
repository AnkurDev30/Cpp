#include<iostream>

class sing 
{
    private:
        sing(){}
    public:
        sing(sing &obj)=delete;
        sing& operator=(sing& ob)=delete;
        static sing& getInstance()
        {
            static sing obj;
            return obj;
        }
};
int main()
{
    sing &dispay = sing::getInstance();
    sing &logger = sing::getInstance();

    std::cout<<&dispay<<" "<<&logger<<std::endl;
}