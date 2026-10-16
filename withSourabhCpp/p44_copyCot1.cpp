#include<iostream>
/**shalloow copy */
class jay 
{
    private:
        int a,b;
    public:
        jay(int x,int y)
        {
            a=x;
            b=y;
        }

        void display()
        {
            std::cout<<"diaplay: "<<a<<std::endl<<b<<std::endl;
        }

        jay(jay &obj)
        {
            std::cout<<"copy construtor\n";
            a = obj.a;
            b = obj.b;
        }

};
int main()
{
    int a,b;
    std::cout<<"enter a and b\n";
    std::cin>>a>>b;

    jay j1(a,b);
    j1.display();

    jay j2 = j1;
    j2.display();
}
