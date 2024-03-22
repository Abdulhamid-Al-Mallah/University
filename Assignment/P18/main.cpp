#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Die{
   public:

   int roll() const {
      srand(time(0));
      return rand() % 6 + 1;
   }
};





int main() {
   Die die;

   int player = 0;
   int computer = 0;
   char choice;
   
   do{
      computer += (die.roll() + die.roll());

      cout << "your points are: " << player << endl;
      cout << "do you want to roll? (y or n): ";
      cin >> choice;

      if(choice == 'y'){
         player += (die.roll() + die.roll());
      }
   }while(choice == 'y' && player <= 21);
   
   cout << "your points are: " << player << endl;
   cout << "Computer points are: " << computer << endl;
   
   if(computer <= 21){
      cout << "computer win" << endl;
   }else if(player <= 21){
      cout << "you win!" << endl;
   }else{
      cout << "It's a tie!" << endl;
   }

   return 0;
}