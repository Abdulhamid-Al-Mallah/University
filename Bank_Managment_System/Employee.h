#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "DataBase.h"

class Employee{
    private:
        enum MainMenu {ADD_CUSTOMER = 1, REMOVE_CUSTOMER, VIEW_CUSTOMER_BALANCE, EXIT};
        int selection;
        DataBase &dataBase;
        void mainMenu();
        void addCustomer();
        void removeCustomer();
        void viewCustomerBalance();
    public:

    Employee(DataBase &db);
    void start();

};

#endif