#include "BankSystem.h"
#include <iostream>

using namespace std;


BankSystem::BankSystem(){
    isAuthenticated = false;
    role = "undefined";
    currentAccountNum = 0;
};



void BankSystem::start(){

        while(!isAuthenticated){
            cout << "Welcom!" << endl;
            authenticate();
        }
        
        if(role == "manager"){
            Manager manager(*database);
            manager.start();
        }
        else if(role == "employee"){
            Employee employee(*database);
            employee.start();
        }
        else if(role == "customer"){
            Customer customer(*database, currentAccountNum);
            customer.start();
        }
}


void BankSystem::authenticate(){
    int accountNum;
    string password;


    while(!isAuthenticated){
        cout << "Account Number: ";
        cin >> accountNum;

        cout << "Password: ";
        cin >> password;

    
        role = database->authenticate(accountNum, password);
        if(role == "undefined"){
            isAuthenticated = false;
            cout << "please make sure you entered valid account number and passowrd" << endl << endl;

        }else{
            isAuthenticated = true;
            currentAccountNum = accountNum;
            cout << endl;
        }
    }
};
