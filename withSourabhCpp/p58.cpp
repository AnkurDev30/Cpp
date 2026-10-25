//C struture and cpp structure
// c++ struct and class
// c and cpp

/*

C struture and cpp structure
c struture : no memeber fucntion allow
cpp structure : member fucntion allow

c structure : static member not allow
cpp structure: static member allow

c structure : access specifier no use
cpp structure : access speifier allow

*/

/**
C++ struture and cpp class

c++ structure by default public and cpp class by default private.

*/

#include<iostream>
struct Abc 
{
    static int x;
    static void printX()
    {
        std::cout<<"x = "<<x<<std::endl;
    }
};

int Abc::x=10;

int main()
{

    Abc a1;
    Abc::printX();
}






