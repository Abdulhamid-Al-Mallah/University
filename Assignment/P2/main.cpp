#include <iostream>

using namespace std;

class Employee {
   private:
   string name;
   int idNumber;
   string department;
   string position;

   public:
   Employee(string n, int i, string d, string p){
      name = n;
      idNumber = i;
      department = d;
      position = p;
   };

   Employee(string n, int i){
      name = n;
      idNumber = i;
      department = "";
      position = "";
   }

   Employee() : Employee("", 0, "", ""){};

   //! mutaturs
   void setName(string n){
      name = n;
   };
   void setId(int i){
      idNumber = i;
   };
   void setDepartment(string d){
      department = d;
   };
   void setPosition(string p){
      position = p;
   };
   
   //! accessors
   string getName() const{
      return name;
   }
   int getId() const{
      return idNumber;
   }
   string getDepartment() const{
      return department;
   }
   string getPosition() const{
      return position;
   }


};


int main() {
   //! Objects
   Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
   Employee emp2("Mark Jones", 39119, "IT", "Programmer");
   Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

   //! printing the data
   cout << "Employee 1:" << endl;
   cout << "Name: " << emp1.getName() << endl;
   cout << "ID Number: " << emp1.getId() << endl;
   cout << "Department: " << emp1.getDepartment() << endl;
   cout << "Position: " << emp1.getPosition() << endl << endl;

   cout << "Employee 2:" << endl;
   cout << "Name: " << emp2.getName() << endl;
   cout << "ID Number: " << emp2.getId() << endl;
   cout << "Department: " << emp2.getDepartment() << endl;
   cout << "Position: " << emp2.getPosition() << endl << endl;

   cout << "Employee 3:" << endl;
   cout << "Name: " << emp3.getName() << endl;
   cout << "ID Number: " << emp3.getId() << endl;
   cout << "Department: " << emp3.getDepartment() << endl;
   cout << "Position: " << emp3.getPosition() << endl;


   return 0;
}