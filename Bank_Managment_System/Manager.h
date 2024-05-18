#ifndef MANAGER_H
#define MANAGER_H

#include "DataBase.h"

class Manager {
    private:
        enum MainMenu {ADD_EMPLOYEE = 1, REMOVE_EMPLOYEE, GENERATE_REPORT, EXIT};
        int selection;
        DataBase &dataBase;

        void mainMenu();
        void addEmployee();
        void removeEmployee();
        void generateReport();
    public:
        Manager(DataBase& db);
        void start();


};


#endif