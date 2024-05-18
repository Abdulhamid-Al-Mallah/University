#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <string>
#include <random>

using namespace std;


struct manager{
    int id;
    string password;
};

struct employee{
    int id;
    string password;
};

struct customer{
    int id;
    string password;
    double balance;
};


class DataBase {
    private:
        vector<manager> managers;
        vector<employee> employees;
        vector<customer> customers;
    int generateAccountNum();
    public:

    DataBase();
    void addEmployee(string &password);
    void removeEmployee(int id);
    void addCustomer(string password);
    void removeCustomer(int id);
    string authenticate(int id, string password);
    void generateReport();
    void viewCustomerBalance(int accountNum);
    void deposit(int id, double amount);
    void withdraw(int id, double amount);

};

#endif