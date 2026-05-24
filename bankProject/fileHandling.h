//fileHandling.h
#ifndef fileHandling_h
#define fileHandling_h
#include"accountDetails.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>

    namespace fileHandlingN
    {
        class fileHandlingC
        {
            public:
                bool writeDataInExcel(accountDetailsN::accountDetailsC &Obj);
                bool readFullData(std::vector <accountDetailsN::accountDetailsC> &ver);
                void clearData();
                bool writeFullData(std::vector <accountDetailsN::accountDetailsC> &ver);
        };
    }
#endif