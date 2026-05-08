//friend class demo

#include<iostream>
class T1
{
    private:
        int a,b;
    public:
        void getAB()
        {
            std::cout<<"enter a b\n";
            std::cin>>a>>b;
        }
    friend class T2;
};
class T2
{
    public:
        void print(T1 obj)
        {
            std::cout<<"a = "<<obj.a<<std::endl;
            std::cout<<"b = "<<obj.b<<std::endl;
        }

        T1 t3;
        

        void printPQ()
        {
            t3.getAB();
            int p = (t3.a)*3;
            int q = (t3.b)*4;
            std::cout<<"p = "<<p<<std::endl;
            std::cout<<"q = "<<q<<std::endl;  
        }
};

int main()
{
    T1 t;
    t.getAB();
    T2 t2;
    t2.print(t);
    t2.printPQ();
    
}