#include <iostream>

using namespace std;

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

	// Insert a new code here
}

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}