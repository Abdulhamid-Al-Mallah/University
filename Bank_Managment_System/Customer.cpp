#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(DataBase &db, int &accountNum) : dataBase(db), selection(0), id(accountNum){}


void Customer::start(){
    while (selection != EXIT){
        mainMenu();

        switch(selection){
            case DEPOSITE:
                deposit();
            break;

            case WITHDRAW:
                withdraw();
            break;

            case VIEW_BALANCE:
                viewBalance();
            break;
        }
    }
    
}

void Customer::mainMenu(){
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. View Balance" << endl;
    cout << "4. Exit" << endl;
    cin >> selection;
    cout << endl;
}


void Customer::deposit(){
    double amount;

    cout << "enter an amount: ";
    cin >> amount;

    dataBase.deposit(id, amount);
}

void Customer::withdraw(){
    double amount;

    cout << "enter an amount: ";
    cin >> amount;

    dataBase.withdraw(id, amount);
}

void Customer::viewBalance(){
    dataBase.viewCustomerBalance(id);
}
