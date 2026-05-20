/********************************************
File name   :   AppMain.cpp
Description :   control the application, 
                main function calling.
Date        :   18 May 2026.
Aurther     :   Ankur Chourey
*********************************************/
#include"AppMain.h"

int main()
{

   // auto count =0;
    std::vector<_namespaceAppMain::_classAppMain>vec;
    _namespaceAppMain::_classAppMain obj;
    _funUpdate(vec,obj);
    std::cout<<"\n\n\n\n";
    _funWrite(vec);
    _fileHandling(vec);
    
  return 0;
}