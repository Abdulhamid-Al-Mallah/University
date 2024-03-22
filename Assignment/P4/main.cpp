#include <iostream>

using namespace std;


class PersonalInfo {
   private:
   string name;
   string address;
   string phoneNum;

   public:

   //! mutaturs
   void setName(string n){
      name = n;
   };

   void setAddress(string a){
      address = a;
   };

   void setPhoneNum(string ph){
      phoneNum = ph;
   };


   //! accessors
   string getName(){
      return name;
   };

   string getAddress(){
      return address;
   };

   string getPhoneNum(){
      return phoneNum;
   };



};






int main(){
   PersonalInfo person1;
   PersonalInfo person2;
   PersonalInfo person3;

   //! ME
   person1.setName("Abdulhamid Al Mallah");
   person1.setAddress("burak mah. gazikent. gaziantep turkey");
   person1.setPhoneNum("05362383948");


   //! my friends
   person2.setName("Khalid khalil");
   person2.setAddress("bostanci mah. sahinbey gaziantep turkey");
   person1.setPhoneNum("05333443948");


   person3.setName("Enes Ramadan");
   person3.setAddress("bostanci mah. sahinbey gaziantep turkey");
   person1.setPhoneNum("05932623948");


   return 0;
}