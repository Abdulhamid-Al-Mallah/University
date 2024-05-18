#include <iostream>
#include "BankSystem.h"
#include "BankSystem.cpp"
#include "Manager.h"
#include "Manager.cpp"
#include "Employee.h"
#include "Employee.cpp"
#include "Customer.h"
#include "Customer.cpp"


using namespace std;



             // {accountNumber, password} some accounts to try the system;

    // managers = {{111111, "aaaaaa"}};
    // employees = {{222222, "bbbbbb"}, {333333, "cccccc"}};
    // customers = {{444444, "dddddd", 1000.0},{555555, "eeeeee", 10034.0},{666666, "ffffff", 1430.0},{777777, "gggggg", 5430.0}};


int main() {
    BankSystem system;

    system.start();


    return 0;
}