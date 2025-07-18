#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int n;
	double result = 1;
    
    cout << "Enter the N number";
    cin >> n;

    if ( n > 0) {
        for (int i = 0; i < n; i++) {
            result *= 2;
        }
    } else {
        for (int i = 0; i < n; i++) {
            result /= 2;
        }
    }
    cout.precision(20);
    cout << "2^" << n << "=" << result << endl;
	return 0;
}