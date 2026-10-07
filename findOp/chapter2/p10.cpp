#include<iostream>
using namespace std;
const int i=10;
int main()
{

    const int i=20;
    std::cout<<&i<<endl<<&::i<<endl;
}