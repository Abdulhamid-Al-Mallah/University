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

   void toss() const {
      sideUp = faces[randomNumber(0, 1)];
   }


   int randomNumber(int min, int max){
      static random_device rd;
      static mt19937 gen(rd());
      uniform_int_distribution<> dis(min, max);

      return dis(gen);
   }

};

int main() {
   Coin TL;
   int tails = 0;
   int heads = 0;

   cout << "The current up side is: " << TL.getSideUp() << endl;

   for(size_t i = 0; i < 20; i++){
      TL.toss();
      cout << TL.getSideUp() << endl;
      
      TL.getSideUp() == "heads" ? heads++ : tails++;
   }

   cout << endl << "Tails count is: " << tails << endl;
   cout << "Heads count is: " << heads << endl;
   return 0;
}