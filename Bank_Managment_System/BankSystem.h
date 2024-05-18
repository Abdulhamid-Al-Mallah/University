#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <iostream>
#include "DataBase.h"
#include "Manager.h"
#include "Employee.h"
#include "Customer.h"



class BankSystem {
    private:
        DataBase *database = new DataBase;
        bool isAuthenticated;
        int currentAccountNum;
        string role;

        void authenticate();

    public:
        BankSystem();
        void start();

};

#endif