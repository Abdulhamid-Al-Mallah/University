#include <iostream>
#include "Employee.h"

Employee::Employee(DataBase& db) : dataBase(db), selection(0){}

void Employee::start(){
    while(selection != EXIT){
      mainMenu();

    switch(selection){
        case ADD_CUSTOMER:
            addCustomer();
        break;

        case REMOVE_CUSTOMER:
            removeCustomer();
        break;

        case VIEW_CUSTOMER_BALANCE:
            viewCustomerBalance();
        break;
    }
  }
}

void Employee::mainMenu(){
    cout << "1. Add Customer" << endl;
    cout << "2. Remove Customer" << endl;
    cout << "3. View Customer Balance" << endl;
    cout << "4. Exit" << endl;
    cin >> selection;
    cout << endl;
}

void Employee::addCustomer(){
    string input;

    cout << "Password: ";
    cin >> input;

    dataBase.addCustomer(input);
}

void Employee::removeCustomer(){
    int id;

    cout << "The Account Number of the Customer you want to remove: ";
    cin >> id;

    dataBase.removeCustomer(id);
}

void Employee::viewCustomerBalance(){
    int id;

    cout << "The Account Number of the Customer you want to view balance: ";
    cin >> id;

    dataBase.viewCustomerBalance(id);
}