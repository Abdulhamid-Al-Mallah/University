#include "Manager.h"
#include <iostream>
#include "DataBase.cpp"

using namespace std;

Manager::Manager(DataBase& db) : dataBase(db), selection(0){};

void Manager::start(){

  while(selection != EXIT){
      mainMenu();

    switch(selection){
        case ADD_EMPLOYEE:
            addEmployee();
        break;

        case REMOVE_EMPLOYEE:
            removeEmployee();
        break;

        case GENERATE_REPORT:
            generateReport();
        break;
    }
    
  }
}


void Manager::mainMenu(){
    cout << "1. Add Employee" << endl;
    cout << "2. Remove Employee" << endl;
    cout << "3. Generate Report" << endl;
    cout << "4. Exit" << endl;
    cin >> selection;
    cout << endl;
}

void Manager::addEmployee(){
    string input;

    cout << "Password: ";
    cin >> input;

    dataBase.addEmployee(input);
}


void Manager::removeEmployee(){
    int id;

    cout << "The Account Number of the Employee you want to remove: ";
    cin >> id;

    dataBase.removeEmployee(id);

}

void Manager::generateReport(){
    dataBase.generateReport();
}