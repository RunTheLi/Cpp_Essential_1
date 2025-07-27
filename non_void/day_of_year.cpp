#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
	// The code you've inserted already
    int yr = year;
    if((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int monthLength(int year, int month) {
	// The code you've inserted already
    if(month == 2){
        return isLeap(year) ? 29 : 28;
    }

    if(month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    } else {
        return 31;
    }
}

int dayOfYear(Date date) {

	// Insert your code here
	int totalDays =0;
    for(int m = 1; m < date.month; m++){
        totalDays += monthLength(date.year, m);
    }
    totalDays += date.day;
    return totalDays;
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}