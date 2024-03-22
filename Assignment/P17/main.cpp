#include <iostream>

using namespace std;


class RetailItem {
   private:
   string description;
   int unitsOnHand;
   double price;

   public:
   //! constructor
   RetailItem(string desc, int units, double itemCost){
      description = desc;
      unitsOnHand = units;
      price = itemCost;
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

class CashRegister {
   private:
   double subtotal;
   double taxRate;
   double total;

   public:
   CashRegister(){
      subtotal = 0;
      taxRate = 0.06;
   };

   void getPurchase(int quantity, RetailItem &item){
      double unitPrice = item.getPrice() * 1.30;
      subtotal = unitPrice * quantity;
      double tax = subtotal * taxRate;
      double total = subtotal + tax;

   cout << "Subtotal is : $" << subtotal << endl;
   cout << "Sales Tax (6%) is: $" << tax << endl;
   cout << "Total: $" << total << endl;

   }

};

int main(){
   RetailItem item1("Shoe", 7, 30);
   RetailItem item2("T-shirt", 15, 20);
   RetailItem item3("Jacket", 11, 100);

   RetailItem items[] = {};


   items[0] = item1;
   items[1] = item2;
   items[2] = item3;

   int selected;
   int quantity;

   if(quantity == 0){
      cout << "quantity can't be less than 0";
   }

   cout << "press (0 = Shoe, 1 = T-Shirt, 2 = Jacket) to select: ";
   cin >> selected;
   cout << "Enter the quantity: ";
   cin >> quantity;

   cout << endl;
   
   CashRegister registerA;

   registerA.getPurchase(quantity, items[selected]);

}