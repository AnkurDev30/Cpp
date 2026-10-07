#include<iostream>
using namespace std;
//const int i=10;
int main()
{

  int i=5;
  int &j=i;
  int &k=j;
  int &l=i;//no error

  cout<<i<<j<<k<<l<<endl;
  
}