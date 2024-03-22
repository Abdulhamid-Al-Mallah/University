#include <iostream>
#include <cmath>

using namespace std;

class Circle {
   private:
   
   //! member varialbes
   double radius;
   double pi = 3.14159;

   public:
   
   //! constructors
   Circle(){
      radius = 0.0;
   };

   Circle(double r){
      radius = r;
   };

   //! mutaturs
   
   void setRadius(double r){
      radius = r;
   };

   //! accessors

   double getRadius(){
      return radius;
   };

   //! member funcions 

   double getArea(){
      return (pi * pow(radius, 2));
   };

   double getDiameter() const{
      return (radius * 2);
   };

   double getCircumference(){
      return 2 * pi * radius;
   }

};



int main(){
   double radius;
   
   //! prompting user
   cout << "Enter a radius of a circle: ";
   cin >> radius;


   //! creatin object
   Circle circle(radius);

   cout << "Circle area is: "<< circle.getArea() << endl;
   cout << "Circle diameter is: "<< circle.getDiameter() << endl;
   cout << "Circle Circumference is: " << circle.getCircumference() << endl;
   
   
   return 0;
}