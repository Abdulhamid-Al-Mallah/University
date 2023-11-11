// ============================ Calculating Total Sales

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int productNumber; 
  int quantitySold;
  float price; // declaring the price variable without initialization

  cout << "Enter product number (-1 to quit): ";
  cin >> productNumber;

  if(productNumber == -1) return 0; // if the user enters -1 it will terminate the program

  cout << "Enter quantity sold: ";
  cin >> quantitySold;

  while (productNumber != -1){
      switch(productNumber){ // inside the switch statement we are going to initialize the variable price based on the product number
    case 1: 
    price = 2.98;
    break;

    case 2:// if the procudt number is 2 the price will be the price of the product 
    price = 4.5;
    break;

    case 3:
    price = 9.98;
    break;

    case 4:
    price = 4.49;
    break;
    
    case 5:
    price = 6.87;
    break;
  }

  cout << "The total price of sold products is: " << quantitySold * price << "\n\n"; // multiplay the quantity sold with the price of the product to know the total price

  // down there we are prompting the user againg and againg till he enters -1
  cout << "Enter product number (-1 to quit): ";
  cin >> productNumber;

  if(productNumber == -1) return 0; 

  cout << "Enter quantity sold: ";
  cin >> quantitySold;
  }
  

  return 0;
}