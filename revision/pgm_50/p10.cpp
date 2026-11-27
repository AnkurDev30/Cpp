/**
Program 5: Dynamic 2D array
- Take rows and columns from the user.
- Dynamically allocate a 2D matrix.
- Take matrix input.
- Print the matrix.
- Calculate the sum of all elements.
- Release all allocated memory correctly.
*/

#include<iostream>

int main()
{

    int r,c;

    std::cout<<"enter  row value\n";
    std::cin>>r;

    std::cout<<"enter column value\n";
    std::cin>>c;

    int **p =new int*[r];

    for(int i=0;i<r;i++)
    {
        p[i]=new int[c];
    }

    std::cout<<"enter data\n";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cin>>p[i][j];
        }
    }
    int sum = 0;
    std::cout<<"print data\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cout<<p[i][j]<<" ";
            sum+=p[i][j];
        }
        std::cout<<"\n";
    }
    std::cout<<"sum = "<<sum<<std::endl;


    for(int i=0;i<r;i++)
    {
        delete[] p[i];
    }

    delete[] p;

    p = nullptr;
}