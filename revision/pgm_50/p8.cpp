/*
Program 3: Find maximum and minimum
- Dynamically allocate an array.
- Store N numbers.
- Find maximum and minimum elements.
- Release allocated memory.
*/

#include<iostream>

int main()
{

    int n;

    std::cout<<"enter n\n";
    std::cin>>n;

    int *p = new int[n]();

    std::cout<<"enter data for array = "<<n<<"\n";

    for(int i=0;i<n;i++)
    {
        std::cin>>p[i];
    }

    std::cout<<"print data\n";

    for(int i=0;i<n;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<"maximum and minimum finding\n";

    int max = p[0];
    int min = p[0];
    
    for(int i=0;i<n;i++)
    {
        if(max<p[i])
        {
            max = p[i];
        }

        if(min>p[i])
        {
            min = p[i];
        }
    }


    std::cout<<"maximum = "<<max<<std::endl;
    std::cout<<"minimum = "<<min<<std::endl;

    delete[] p;
}