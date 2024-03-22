#include <iostream>
#include <cstdlib>

using namespace std;


class Inventory {
   private:
   int itemNumber;
   int quantity;
   double cost;
   double totalCost;
   public:

   //! constructor
   Inventory(){
      itemNumber = 0;
      quantity = 0;
      cost = 0;
      totalCost = 0;
   };

   Inventory(int n, double c, int q){
      itemNumber = n;
      quantity = q;
      cost = c;
      setTotalCost();
   };

   //! mutaturs

   void setItemNumber(int value){
      itemNumber = value;
   };

   void setQuantity(int value){
      quantity = value;
   };

   void setCost(double value){
      cost = value;
   };

   void setTotalCost(){
      totalCost = quantity * cost;
   };


   //! accessors

   int getItemNumber() const {
      return itemNumber;
   };

   int getQuantity() const {
      return quantity;
   };

   double getCost() const {
      return cost;
   };

   double getTotalCost() const{
      return totalCost;
   };
};



int main(){
   int itemNumber;
   int quantity;
   double cost;

   //! prompting user and filtring the values
   cout << "Item number: ";
   cin >> itemNumber;

   if(itemNumber < 0){
      cout << "Don't pass negative vlaues";
      return -1;
   }

   cout << "Quantity: ";
   cin >> quantity;

   if(quantity < 0){
      cout << "Don't pass negative vlaues";
      return -1;
   }

   cout << "Cost: ";
   cin >> cost;

   if(cost < 0){
      cout << "Don't pass negative vlaues";
      return -1;
   }

   //! create an object
   Inventory item(itemNumber, cost, quantity);

   cout << "The total cost is: " << item.getTotalCost();




   return 0;
}