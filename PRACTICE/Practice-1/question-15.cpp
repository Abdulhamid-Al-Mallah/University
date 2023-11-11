// ============================Find The Smallest Intger

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int numberOfValues{0};
  int value;
  int smallest;


  cout << "Enter the number of values you want to compare: ";
  cin >> numberOfValues;

  cout << "Enter a value: ";
  cin >> smallest;

  for(unsigned int i = 1; i < numberOfValues; i++){
    cout << "Enter a value: ";
    cin >> value;
    if(smallest > value){
      smallest = value;
    }
  }

  cout << "The smalles value is: "<< smallest << endl;

  return 0; 
}