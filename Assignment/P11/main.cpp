#include <iostream>

using namespace std;

class PayRoll {
   private:

   double payRate;
   double workedHours;
   double totalWeekPay;

   public:

   //! constructor
   PayRoll(){
      payRate = 0;
      workedHours = 0;
      totalWeekPay = 0;
   }

   //! mutaturs
   void setPayRate(double value){
      payRate = value;
   };

   void setWorkedHours(double value){
      workedHours = value;
   };
   
   void setTotalWeekPay(){
      totalWeekPay = payRate * workedHours;
   };

   //! accessors
   double getPayRate() const {
      return payRate;
   }
   double getWorkedHours() const {
      return workedHours;
   }
   double getTotalWeekPay() const {
      return totalWeekPay;
   }

};


int main(){
   const int SIZE = 2;
   PayRoll employees[SIZE];

   double payRate;
   double workedHours;
   
   for(size_t i = 0; i < SIZE; i++){
      cout << "Enter the pay rate for employee " << (i+1) << ": ";
      cin >> payRate;

      cout << "Enter the hours worked by employee " << (i+1) << ": ";
      cin >> workedHours;

      if(workedHours > 60) {
         cout << "max hour is 60";
         return -1;
      }

      employees[i].setPayRate(payRate);
      employees[i].setWorkedHours(workedHours);
      employees[i].setTotalWeekPay();
   }


   cout << endl << "The gross pay of each employee is:" << endl;

   for(size_t i = 0; i < SIZE; i++){
      cout << (i+1) << ".Employee: $" << employees[i].getTotalWeekPay() << endl;
   }

}