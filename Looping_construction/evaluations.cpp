#include <iostream>

using namespace std;

int main(void) {
	double pi4 = 0.;
	long iterations;

	cout << "Number of iterations? ";
	cin >> iterations;

	// Insert your code here
    for (long n = 0; n < iterations; n++) {
        double term = (n % 2 == 0 ? 1.0 : -1.0) / (2 * n + 1);
        pi4 += term;
    }
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}