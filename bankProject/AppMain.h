//AppMain.h
#ifndef AppMain_h
#define AppMain_h


//header files
#include"accountDetails.h"
#include"fileHandling.h"
#include"bankingOperation.h"
#include"moneyTransfer.h"
#include <thread>
#include <chrono>
#include<iostream>
#include<string>
#include <ctime>
#include <limits>
#include <fstream>


//constant 
#define LOGINID "ASDF1234"
#define PASSKEY 1234
#define WELCOME_MSG "------Welcome to State Bank Of India------"

//general operation class
namespace generalOperationN
{
    class generalOperationC
    {
        public:
            void clearScreen();
            void welcomeBank();
            void delay(int sec);
            void cinIgnore();
            bool loginCheck();
            void startUpFun();
            void selectOption(int option);
            friend class bankingOperationN::bankingOperationC;
    };
}
#endif