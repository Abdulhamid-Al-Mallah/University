#include <iostream>
#include <cmath>

using namespace std;

class MortgageCalculator {
private:
   double loanAmount;
   double annualInterestRate;
   int loanYears;

public:
   MortgageCalculator() : loanAmount(0), annualInterestRate(0), loanYears(0) {}

   void setLoanAmount(double amount) {
      if (amount >= 0)
            loanAmount = amount;
      else
            cout << "Error: Loan amount cannot be negative." << endl;
   }

   void setAnnualInterestRate(double rate) {
      if (rate >= 0)
            annualInterestRate = rate;
      else
            cout << "Error: Interest rate cannot be negative." << endl;
   }

   void setLoanYears(int years) {
      if (years >= 0)
            loanYears = years;
      else
            cout << "Error: Loan years cannot be negative." << endl;
   }

   double calculateMonthlyPayment() const {
      if (annualInterestRate == 0) {
            return loanAmount / (loanYears * 12);
      } else {
            double monthlyInterestRate = annualInterestRate / 12 / 100;
            int totalPayments = loanYears * 12;
            double monthlyPayment = loanAmount * monthlyInterestRate / 
               (1 - pow(1 + monthlyInterestRate, -totalPayments));
            return monthlyPayment;
      }
   }

   double calculateTotalAmountPaid() const {
        return calculateMonthlyPayment() * loanYears * 12;
   }
};

int main() {
   MortgageCalculator mortgage;

   double loanAmount, annualInterestRate;
   int loanYears;

   cout << "Enter loan amount: ";
   cin >> loanAmount;
   mortgage.setLoanAmount(loanAmount);

   cout << "Enter annual interest rate (%): ";
   cin >> annualInterestRate;
   mortgage.setAnnualInterestRate(annualInterestRate);

   cout << "Enter loan years: ";
   cin >> loanYears;
   mortgage.setLoanYears(loanYears);

   cout << "Monthly Payment: $" << mortgage.calculateMonthlyPayment() << endl;
   cout << "Total Amount Paid: $" << mortgage.calculateTotalAmountPaid() << endl;

   return 0;
}
