#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int iterationCount{0};
  float currentNumber{0};
  float total{0};

  cout << "Enter the count of the numbers you would like to sum: ";
  cin >> iterationCount;

  

  for (unsigned int i = 0; i < iterationCount; i++)
  {
    cout << "Enter a Number to sum: ";
    cin >> currentNumber;
    total += currentNumber;
  }

  cout << "\n" << "the sum of the numbers you entered is: " << total << endl;

  return 0;
}