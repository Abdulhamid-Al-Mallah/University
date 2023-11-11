// ========================= Averaging Integer
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int value;             // the value given by user
  int sum{0};            // this variable to store the sum of all values
  unsigned int count{0}; // storing the count of values has been entered

  for (;; count++)
  { // inside the (for) loop we just used the increament each time
    cout << "Enter a number each time, (9999 to quit): ";
    cin >> value;

    if (value == 9999)
      break; // if the value is equal to the sentinel (9999) stop and skip the loop

    sum += value; // adding each value to the sum variable
  }

  cout << "the average is: " << sum / count << endl; // printing the average by dviding sum by count

  return 0;
}