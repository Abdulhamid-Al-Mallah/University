// ===================== Drawing Patterns with Nested for Loops

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//=========================================== One
  for (unsigned int j = 1; j <= 10; j++){
    for (unsigned int k = 1; k <= j; k++){
      cout << "*";
    }
    cout << "\n";
  }

  cout << "\n";

//=========================================== Two
  for (unsigned int j = 10; j >= 1; j--){
    for (unsigned int k = j; k >= 1; k--){
      cout << "*";
    }
    cout << "\n";
  }

  cout << "\n";

//=========================================== Three
  for (unsigned int j = 1; j <= 10; j++){
    for(unsigned int i = 1; i < j; i++){
      cout << " ";
    }
    for (unsigned int k = 10; k >= j; k--){
      cout << "*";
    }
    cout << "\n";
  }

  cout << "\n";

//=========================================== Four
  for (unsigned int j = 1; j <= 10; j++){
    for(unsigned int i = 10; i > j; i--){
      cout << " ";
    }
    for (unsigned int k = 1; k <= j; k++){
      cout << "*";
    }
    cout << "\n";
  }
}
