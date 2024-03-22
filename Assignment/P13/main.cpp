#include <iostream>
#include <random>

using namespace std;

class Coin {
   private:
   const string faces[2] = {"heads", "tails"};
   string sideUp;
   
   public:

   //! constructor
   Coin(){
      sideUp = faces[randomNumber(0, 1)];
   }


   //! accessors
   string getSideUp() {
      return sideUp;
   }

   //! member functions 
   void toss() {
      sideUp = faces[randomNumber(0, 1)];
   }


   int randomNumber(int min, int max){
      static random_device rd;
      static mt19937 gen(rd());
      uniform_int_distribution<> dis(min, max);

      return dis(gen);
   }

};


int main(){
   Coin quarter, dime, nickel;

   double balance = 0;

   while(balance < 1){
      quarter.toss();
      dime.toss();
      nickel.toss();

      if(quarter.getSideUp() == "heads"){
         balance += 0.25;
      }

      if(dime.getSideUp() == "heads"){
         balance += 0.10;
      }

      if(nickel.getSideUp() == "heads"){
         balance += 0.05;
      }

      cout << "Current Balance: $" << balance << endl;

      if(balance >= 1){
            if(balance == 1){
               cout << "you win";
            }else{
               cout << "you lost";
         }
         break;
      }
   }


   return 0;
}