#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  unsigned int miles;
  unsigned int gallons;
  int totalMiles{0};
  int totalGallons{0};

  cout << "Enter miles driven (-1 to quit): ";
  cin >> miles;

  if (miles == -1)return 0; // if the user enterd -1 stop evrything and return me a 0

  cout << "Enter gallons used: ";
  cin >> gallons;

  while (miles != -1)
  {
    cout << setprecision(8); // it makes the number 8 digits long
    cout << "MPG this trip: " << static_cast<double>(miles) / gallons << "\n"; // calculating mile per gallon for this tirp

    totalGallons += gallons; // add the gallons used in this trip to the total gallons used in all trips
    totalMiles += miles;     // add the miles driven in this trip to the total miles driven in all trips

    cout << "Total MPG: " << static_cast<double>(totalMiles) / totalGallons << "\n\n\n"; // calculating mile per gallon of all trips

    // asking the user againg till he give -1
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;

    if (miles == -1)return 0; // if the user enterd -1 stop evrything and return me a 0

    cout << "Enter gallons used: ";
    cin >> gallons;
  }

  return 0;
}