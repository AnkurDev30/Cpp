//private inheritance

#include<iostream>
class base
{
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;
        base(int x,int y,int z)
        {
            publicVar = x;
            protectedVar = y;
            privateVar = z;
            std::cout<<"publicVar ="<<publicVar<<std::endl;
            std::cout<<"protectedVar ="<<protectedVar<<std::endl;
            std::cout<<"privateVar ="<<privateVar<<std::endl;
        }
};
class d1:private base
{
    public:
        int a,b,c;
        int sumVar = 0;
        d1(int p,int q,int r):base(p,q,r)
        {
            a=p;
            b=q;
            c=r;
        }
        d1():base(0,0,0){};
        void sum()
        {
            //this is give error because private not access
            // sumVar = publicVar + protectedVar + privateVar;

            //due to private inheritance its make public variable or members to private 
            //sumVar = publicVar + protectedVar ;
           // std::cout<<"sum = "<<sumVar<<std::endl;



        }
};
//now multileval inheritance.
class d2:public d1
{
    public:
        void print()
        {
            //this give error because private inheritance
           // int sumVarNew = publicVar + protectedVar ;

           //int sumVarNew = publicVar ;  also give error

            int sumVarNew=0;
            std::cout<<"sum Var new= "<<sumVarNew<<std::endl;
        }
};
int main()
{
    d1 D(1,2,3);
    D.sum();
    d2 D2;
    D2.print();

    //this is also give error because inheritance is private means base class 
    //any member we cant not access out of drive class

    //std::cout<<"try to access public var from base ="<<D.publicVar<<std::endl;
}