#include <iostream>

using namespace std;


class TestScore {
   private:
   double score1;
   double score2;
   double score3;

   public:
   
   //! constructor 
   TestScore(double a, double b, double c){
      score1 = a;
      score2 = b;
      score3 = c;
   };

   //! mutaturs
   void setScore1(double value) {
      score1 = value;
   };

   void setScore2(double value) {
      score2 = value;
   };

   void setScore3(double value) {
      score3 = value;
   };
   

   //! accessors 
   double getScore1(){
      return score1;
   };

   double getScore2(){
      return score2;
   };

   double getScore3(){
      return score3;
   };

   //! member functions
   
   double getAverageScore() {
      return (score1 + score2 + score3) / 3;
   }


};



int main(){
   double score1;
   double score2;
   double score3;


   //! prompt user
   cout << "Enter 3 test scores: ";
   cin >> score1 >> score2 >> score3;

   //! create the object
   TestScore midterm(score1, score2, score3);

   
   cout << "\nThe average score is: " << midterm.getAverageScore();

   return 0;
}