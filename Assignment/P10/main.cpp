#include <iostream>

using namespace std;

class NumberArray {
   private:

   float *numbers;
   int size;


   public:

   //! constructor
   NumberArray(int size){
      this->size = size;
      numbers = new float[size];
   };

   //! destructor
   ~NumberArray(){
      delete [] numbers;
   }

   //! member funtions

   void storeNumber(float value, int place){
      numbers[place-1] = value;
   };


   float getNumber(int place){
      return numbers[place];
   };

   float getMaxNumber(){
      float max = numbers[0];

      for(int i = 1; i < size; i++){
         if(numbers[i] > max){
            max = numbers[i];
         }
      }

      return max;
   };

   float getMinNumber(){
      float min = numbers[0];

      for(int i = 1; i < size; i++){
         if(numbers[i] < min){
            min = numbers[i];
         }
      }

      return min;
   };

   float getAverage() {
      float sum = 0;

      for(int i = 1; i < size; i++){
         sum += numbers[i];
      }

      return (sum / size);
   };
};


int main(){
   int size;
   float value;
   int place;

   

   cout << "Enter the size of the array: ";
   cin >> size;

   cout << "\n";

   NumberArray arr(size);

   while(true){
      cout << "Choose an element: ";
      cin >> place;

      if(place == -1) break;

      cout << "Enter a value: ";
      cin >> value;

      if(value == -1) break;

      arr.storeNumber(value, place);
   }

   cout << endl;
   for(size_t i = 0; i < size; i++){
      cout << (i+1) << ".Element : " << arr.getNumber(i) << endl;
   }


   cout << endl;
   cout << "The MAX element in the array is: " << arr.getMaxNumber() << endl; 
   cout << "The MIN element in the array is: " << arr.getMinNumber() << endl; 
   cout << "The Average of the array elements is: " << arr.getAverage() << endl; 

   return 0;
}