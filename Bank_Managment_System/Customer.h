#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "DataBase.h"

class Customer{
    private:
        enum MainMenu {DEPOSITE = 1, WITHDRAW, VIEW_BALANCE, EXIT};
        int selection;
        int id;
        DataBase &dataBase;

        void mainMenu();
        void deposit();
        void withdraw();
        void viewBalance();
    public:

    Customer(DataBase &db, int &accountNum);
    void start();

};


#endif