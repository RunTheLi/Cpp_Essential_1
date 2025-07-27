#include <iostream>
#include <ctime>

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {

	// Insert your code here

}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}