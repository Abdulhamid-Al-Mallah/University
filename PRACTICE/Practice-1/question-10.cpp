#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  unsigned int miles{0};
  unsigned int gallons{0};
  int totalMiles{0};
  int totalGallons{0};

  cout << "Enter miles driven (-1 to quit): ";
  cin >> miles;

  cout << "Enter gallons used: ";
  cin >> gallons;

  while (miles != -1)
  {
    cout << setprecision(8);
    cout << "MPG this trip: " << static_cast<double>(miles) / gallons << "\n";

    totalGallons += gallons;
    totalMiles += miles;

    cout << "Total MPG: " << static_cast<double>(totalMiles) / totalGallons << "\n\n\n";

    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;

    cout << "Enter gallons used: ";
    cin >> gallons;
  }

  return 0;
}