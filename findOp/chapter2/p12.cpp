#include<iostream>
using namespace std;
int main()
{
   enum result{first,second,third};
   result a=first;//0

   int b=a;//b=0,a=0
   //result c = 1 ;  //it will give error
   result c=result(1);//not give error
   
   result d = result (1);//d =1

   return 0;

}