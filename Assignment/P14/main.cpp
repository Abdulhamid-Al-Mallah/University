#include <iostream>
#include <random>

using namespace std;

class Die {
   private:
   int caught;

   public:
   
   //! constructor
   Die(){
      caught = random();
   }

   //! mutaturs
   void fish(){
      caught = random();
   }

   //! accessors
   
   int getTheFish() const {
      return caught;
   }

   int random(){
      static random_device rd;
      static mt19937 gen(rd());
      uniform_int_distribution<> dis(0, 6);
      return dis(gen);
   }
};



int main(){
   Die fish;
   const int ITEMS = 7;
   string itmes[ITEMS] = {"A huge fish", "an old shoe", "a little fish", "can", "shark", "metal chain", "Blue fish"};
   string messages[] = {"good", "awsome", "you are the king", "bla bla bla"};
   int wantToFish = 1;
   int score = 0;
   
   while(wantToFish == 1){
         fish.fish();
         score += fish.getTheFish();
         cout << itmes[fish.getTheFish()] << endl;

      cout << "Do you want to continue (yes = 1, no = 0): ";
      cin >> wantToFish;
   }

   cout << endl;

   if(score < 10){
      cout << messages[0];
   }else if(score < 30){
      cout << messages[1];
   }else if(score < 70){
      cout << messages[2];
   }else if(score <= 100){
      cout << messages[3];
   }
   
   cout << "\t" << score;


   return 0;
}