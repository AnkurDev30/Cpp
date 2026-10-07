#include<iostream>
using namespace std;
//const int i=10;
int main()
{

  int a=10,b=20;
  long int c;
  //c=a*long int(b);//this will give error
  c =a*(long int)(b);//this is solution or static cast
  cout<<c<<endl;//200
}