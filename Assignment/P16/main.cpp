#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Temprature {
private:
   double temp;

public:
   Temprature(double t) : temp(t) {}

   double get() const {
      return temp;
   }

   void set(double t) {
      temp = t;
   }

   bool isFreezingEthyl() const {
      return temp <= -173;
   }

   bool isBoilingEthyl() const {
      return temp >= 172;
   }

   bool isFreezingOxygen() const {
      return temp <= -362;
   }

   bool isBoilingOxygen() const {
      return temp >= -306;
   }

   bool isFreezingWater() const {
      return temp <= 32;
   }

   bool isBoilingWater() const {
      return temp >= 212;
   }
};

int main() {
   cout << "Input temprature: ";
   double t;
   cin >> t;

   Temprature temp(t);

   vector<string> substances;

   if (temp.isFreezingEthyl())
      substances.push_back("Ethyl Alcohol");
   if (temp.isBoilingEthyl())
      substances.push_back("Ethyl Alcohol");
   if (temp.isFreezingOxygen())
      substances.push_back("Oxygen");
   if (temp.isBoilingOxygen())
      substances.push_back("Oxygen");
   if (temp.isFreezingWater())
      substances.push_back("Water");
   if (temp.isBoilingWater())
      substances.push_back("Water");

   cout << "At " << t << " degrees, ";
   if (substances.empty()) {
      cout << "nothing will freeze or boil." << endl;
   } else {
      cout << "the following substances ";
      if (substances.size() == 1)
            cout << "will ";
      else
            cout << "will either ";
      
      cout << "freeze or boil: ";
      
      for (size_t i = 0; i < substances.size(); ++i) {
            if (i > 0)
               cout << ", ";
            cout << substances[i];
      }
      cout << "." << endl;
   }

   return 0;
}
