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
	// The code you've inserted already
    int totalDays =0;
    for(int m = 1; m < date.month; m++){
        totalDays += monthLength(date.year, m);
    }
    totalDays += date.day;
    return totalDays;
}

int daysBetween(Date d1, Date d2) {

	// Insert you code here
    int daysBetween = 0;

    if(d1.year > d2.year){
        return -1;
    }

    if(d1.year == d2.year){
        if(d1.month > d2.month){
            return -1;
        }

        if(d1.month == d2.month){
            if(d1.day > d2.day){
                return -1;
            }

            return d2.day - d1.day;
        }
        return dayOfYear(d2) - dayOfYear(d1);
    }
    int days;

    Date Dec31 = { d1.year, 12, 31 };

    days = dayOfYear(Dec31) - dayOfYear(d1);

    for(int yr = d1.year + 1; yr < d2.year; yr++)
		if(isLeap(yr))
			days += 366;
		else
			days += 365;

    days += dayOfYear(d2);
	return days;
}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}