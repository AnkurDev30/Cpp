#include<iostream>
using namespace std;
const int i=10;
int main()
{

    const int i=20;
    cout<<i<<endl<<::i<<endl;//20 10

    cout<<&i<<endl<<&::i<<endl;//address of local i and address of global
  
}