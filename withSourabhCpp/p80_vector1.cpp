//vector: vector is nothing but a dynamically array , which is able to automatically allocated memory and release it

// headerfile vector

// #include<vector>,  syntax std::vector<data type> varname 


//push_back vec[10] = 1 2 3 4 5 6 7 8 9 0

//[]  index operator
#include<iostream>
#include<vector>

int main()
{


    std::vector<int>vecInt;//integer vector

    std::vector<char>vecChar;//char vector

    std::vector<float>vecFlaot;//float vector


    for(int i=0;i<10;i++)
    {
        int a;

        std::cout<<"enter a\n";
        std::cin>>a;

        vecInt.push_back(a);
    }

    for(int i=0;i<10;i++)
    {
        std::cout<<vecInt[i]<<" ";
    }
    std::cout<<"\n";
}
