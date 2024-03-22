#include <iostream>

using namespace std;


class RetailItem {
   private:
   string description;
   int unitsOnHand;
   double price;

   public:
   //! constructor
   RetailItem(string d, int u, double p){
      description = d;
      unitsOnHand = u;
      price = p;
   };

   //! mutaturs
   void setDesctription(string value){
      description = value;
   };

   void setUnitsOnHand(int value){
      unitsOnHand = value;
   };

   void setPrice(double value){
      price = value;
   };


   //! accessors
   string getDesctription() const{
      return description;
   };

   int getUnitsOnHand() const{
      return unitsOnHand;
   };

   int getPrice() const{
      return price;
   };


};




int main(){
   RetailItem item1("Jacket", 12, 59.95);
   RetailItem item2("Designer Jeans", 40, 34.95);
   RetailItem item3("Shirt", 20, 24.95);

   return 0;
}