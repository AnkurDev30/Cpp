#include<iostream>

static int x;
bool fun()
{
    bool abc;
    x++;

    if(x>5)
    {
        abc=true;
        
    }
    else
    {
        abc=false;
    }
    return abc;
}
int main()
{

  // bool A = true;
//
  //  std::cout<<A<<std::endl;
  //  A = false;
//
  //  std::cout<<A<<std::endl;

  for(int i=0;i<10;i++)
  {
    bool ret = fun();
    std::cout<<ret<<" \n";
  }


}