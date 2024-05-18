#include "DataBase.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;

DataBase::DataBase(){
    managers = {{111111, "aaaaaa"}};
    employees = {{222222, "bbbbbb"}, {333333, "cccccc"}};
    customers = {{444444, "dddddd", 1000.0},{555555, "eeeeee", 10034.0},{666666, "ffffff", 1430.0},{777777, "gggggg", 5430.0}};
}

    
int DataBase::generateAccountNum(){
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(100000, 999999);


    return distribution(generator);
}

void DataBase::addEmployee(string &password){
        int id = generateAccountNum();
        employees.push_back({id, password});

        cout << "The Account Number of the new Employee is: " << id << endl;
        cout << "The Password of the new Employee is: " << password << endl << endl << endl;
};
    

void DataBase::removeEmployee(int id){
auto it = remove_if(employees.begin(), employees.end(), [id](const employee& emp) { return emp.id == id; });
    if (it != employees.end()) {
        employees.erase(it, employees.end());
        cout << "Employee with Account Number " << id << " has been removed.\n\n";
    } else {
        cout << "Employee with Account Number " << id << " not found.\n\n";
    }
};

void DataBase::addCustomer(string password){
        int id = generateAccountNum();
        customers.push_back({id, password, 0.0});

        cout << "The Account Number of the new Customer is: " << id << endl;
        cout << "The Password of the new Customer is: " << password << endl << endl << endl;
    };

void DataBase::removeCustomer(int id){
       auto it = remove_if(customers.begin(), customers.end(), [id](const customer& cus) { return cus.id == id; });
    if (it != customers.end()) {
        customers.erase(it, customers.end());
        cout << "Customer with Account Number " << id << " has been removed.\n\n";
    } else {
        cout << "Customer with Account Number " << id << " not found.\n\n";
    }
    };

string DataBase::authenticate(int id, string password){

    for(const customer& user : customers){
        if(user.id == id && user.password == password){
            return "customer";
        }
    }

    for(const employee& user : employees){
        if(user.id == id && user.password == password){
            return "employee";
        }
    }

    for(const manager &user : managers){
        if(user.id == id && user.password == password){
            return "manager";
        }
    }

    return "undefined";
};


void DataBase::generateReport(){
    double totalBalance = 0;
    cout << "Role" << setw(28) << "Account Number" << setw(20) << " Balance" << endl;
    cout << "=======================================================================" << endl;

    for(const customer& user : customers){
        totalBalance += user.balance;
        cout << "Customer" << setw(24) << user.id << setw(20) << user.balance << endl;
        cout << "-----------------------------------------------------------------------" << endl;
    }
    cout << setw(32) << "Number of Customers" << setw(20) << "Total Balance" << endl;
    cout << setw(32) << customers.size() << setw(20) << totalBalance << endl;
    cout << "=======================================================================" << endl;

    cout << "\n\n";

    cout << "Role" << setw(28) << "Account Number" << endl;
    cout << "=======================================================================" << endl;

     for(const employee& user : employees){
        cout << "Employee" << setw(24) << user.id << endl;
        cout << "-----------------------------------------------------------------------" << endl;
    }

    cout << setw(32) << "Number of Employees" << endl;
    cout << setw(32) << employees.size() << endl;
}


void DataBase::viewCustomerBalance(int accountNum){
    bool isFind = false;
    for(const customer& user : customers){
        if(user.id == accountNum){
            isFind = true;
            cout << "the balance of the user with Account: " << accountNum << " is: " << user.balance << "$" << endl;
        }
    }

    !isFind && cout << "Customer with Account: " << accountNum << " not found" << endl;
    cout << "\n\n";
}


void DataBase::deposit(int id, double amount){
    bool isFind = false;
    for(customer &user : customers){
        if(user.id == id){
            isFind = true;
            user.balance += amount;
            cout <<"+"<< amount << "$ done successfuly!" << endl;
        }
    }

    !isFind && cout << "Account: " << id << " not found"<< endl;
    cout << "\n\n";
}

void DataBase::withdraw(int id, double amount){
    bool isFind = false;
    for(customer &user : customers){
        if(user.id == id){
            if(user.balance >= amount){
                isFind = true;
                user.balance -= amount;
                cout <<"-"<< amount << "$ done successfuly!" << endl;
            }
            else{
                cout << "you don't have enough balance" << endl;
            }
        }
    }
    !isFind && cout << "Account: " << id << " not found"<< endl;
    cout << "\n\n";
}
