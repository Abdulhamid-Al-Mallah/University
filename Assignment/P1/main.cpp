#include <iostream>

using namespace std;



//! class decleration
class Date {
private:
	int day;
	int month;
	int year;

public:
	Date(int d, int m, int y);

	void fisrtFormat();
	void secondFormat();
	void thirdFormat();
};

//! array of months names
string months[] = {
   "",
   "January",
   "February",
   "March",
   "April",
   "May",
   "June",
   "July",
   "August",
   "September",
   "October",
   "November",
   "December" };

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::fisrtFormat() {
	cout << month << "/" << day << "/" << year << endl;
};

void Date::secondFormat() {
	cout << months[month] << " " << day << "," << year << endl;
};

void Date::thirdFormat() {
	cout << day << " " << months[month] << " " << year;
};




int main() {
    int day;
    int month;
    int year;


    //! prompting and validating day
    cout << "Day: ";
    cin >> day;

    while (day < 1 || day > 31) {
        cout << "Not valid day: ";
        cin >> day;
    }

    cout << endl << endl;


    //! prompting and validating month
    cout << "Month: ";
    cin >> month;

    while (month < 1 || month > 12) {
        cout << "Not valid month: ";
        cin >> month;
    }

    cout << endl << endl;

    //! prompting and validating month
    cout << "Year: ";
    cin >> year;

    cout << endl << endl;



    //! create date object 
    Date date(day, month, year);

    date.fisrtFormat();
    date.secondFormat();
    date.thirdFormat();


    return 0;
}