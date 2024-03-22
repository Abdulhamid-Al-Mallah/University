#include <iostream>

using namespace std;

class Population {
   private:
   
   //! memeber variables
   double population;
   double birth;
   double death;


   public:

   //! constructor
   Population(){
      population = 0;
      birth = 0;
      death = 0;
   }

   Population(double p, double b, double d){
      population = p;
      birth = b;
      death = d;
   };


   //! mutaturs
   void setPopulation(double value) {
      population = value;
   };

   void setBirth(double value) {
      birth = value;
   };

   void setDeath(double value) {
      death = value;
   };

   //! accessors
   double getPopulation() const{
      return population;
   };

   double getBirth() const {
      return birth;
   };

   double getDeath() const {
      return death;
   };


   //! member functions
   double getBirthRate() {
      return (birth / population);
   };

   double getDeathRate() {
      return (death / population);
   };


};


int main(){
   double population;
   double death;
   double birth;



   //! prompting user and cheking values
   cout << "Enter the population : ";
   cin >> population;

   if (population < 1){
      cout << "can't accept values less than 1, try again!!";
      return -1;
   }

   cout << "Enter the number of birth : ";
   cin >> birth;
   
   if (birth < 0){
      cout << "Can't accept values less than 0, try again!!";
      return -1;
   }

   cout << "Enter the number of death : ";
   cin >> death;

   if(death < 0){
      cout << "Can't accept values less than 0, try again!!";
      return -1;
   }

   cout << "\n\n";


   //! create an object
   Population turkey(population, birth, death);

   //! printing results
   cout << "The Birth Rate is: "<< turkey.getBirthRate() << endl;
   cout << "The Death Rate is: "<< turkey.getDeathRate() << endl;




   return 0;
}