#include<iostream>

class thsiDemo2
{
    private:
        int a;
        int b;
    public:
        void name(std::string nameVar)
        {
            std::cout<<nameVar<<std::endl;
        }
        void addFromOut(int a)
        {
            this->a = a;
            this->b=this->a;
            this->name("sK");
        }
        void show()
        {
            std::cout<<this->a<<std::endl;
            std::cout<<this->b<<std::endl;
        }
};

int main()
{
    thsiDemo2 t1;
    thsiDemo2 t2;
    t1.addFromOut(27);
    t1.show();
    t2.addFromOut(67);
    t2.show();
}