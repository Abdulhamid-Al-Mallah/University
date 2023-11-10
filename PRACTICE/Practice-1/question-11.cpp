#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int accountNumber{0};
  float beginningBalance{0};
  float totalCharges{0};
  float totalCredits{0};
  float creditLimit{0};
  float newBalance{0};

  cout << "Enter account number (or -1 to quit): ";
  cin >> accountNumber;

  if (accountNumber == -1)
    return 0;

  cout << "Enter beginning balance: ";
  cin >> beginningBalance;

  cout << "Enter total charges: ";
  cin >> totalCharges;

  cout << "Enter total credits: ";
  cin >> totalCredits;

  cout << "Enter credit limit: ";
  cin >> creditLimit;
  cout << "\n";

  while (accountNumber != -1)
  {

    newBalance = beginningBalance + totalCharges - totalCredits;

    if (newBalance >= creditLimit)
    {
      cout << "Account: " << accountNumber << "\n";
      cout << "Credit limit: " << creditLimit << "\n";
      cout << "Balance: " << newBalance << "\n";
      cout << "Credit Limit Exceeded."<< "\n\n\n";
    }
    else
    {
      cout << "New balance is: " << newBalance << "\n\n\n";
    }

    cout << "Enter account number (or -1 to quit): ";
    cin >> accountNumber;

    if (accountNumber == -1)
      return 0;

    cout << "Enter beginning balance: ";
    cin >> beginningBalance;

    cout << "Enter total charges: ";
    cin >> totalCharges;

    cout << "Enter total credits: ";
    cin >> totalCredits;

    cout << "Enter credit limit: ";
    cin >> creditLimit;
    cout << "\n";
  }

  return 0;
}