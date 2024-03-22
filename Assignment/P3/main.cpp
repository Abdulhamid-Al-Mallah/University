#include <iostream>

using namespace std;


class Car{
   private:
   int yearModel;
   string make;
   int speed;

   public:
   //! constructor
   Car(int y, string m){
      yearModel = y;
      make = m;
      speed = 0;
   };


   //! accessors
   int getYearModel() const {
      return yearModel;
   };

   string getMake() const{
      return make;
   };

   int getSpeed() const {
      return speed;
   };


   //! member functions
   void accelerate(){
      speed += 5;
   };

   void brake(){
      speed -= 5;
   };
};





int main (){
   Car car(2020, "BMW");

   cout << car.getSpeed() << endl;

   //! accelerating
   car.accelerate();
   cout << car.getSpeed() << endl;

   car.accelerate();
   cout << car.getSpeed() << endl;

   car.accelerate();
   cout << car.getSpeed() << endl;

   car.accelerate();
   cout << car.getSpeed() << endl;

   car.accelerate();
   cout << car.getSpeed() << endl;


   //! braking
   car.brake();
   cout << car.getSpeed() << endl;
    
   car.brake();
   cout << car.getSpeed() << endl;

   car.brake();
   cout << car.getSpeed() << endl;

   car.brake();
   cout << car.getSpeed() << endl;

   car.brake();
   cout << car.getSpeed() << endl;
   
   
   
   return 0;
}