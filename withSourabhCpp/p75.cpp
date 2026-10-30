#include<iostream>

template <typename t>

class gen 
{
    private:
        t a;
    public:
        void t_display(t var)
        {
            std::cout<<var<<" <--: var value\n";
        }
};

int main()
{

    gen<int> ab;

    ab.t_display(1000);

    gen<const char*>bc;
    bc.t_display("BC");
}