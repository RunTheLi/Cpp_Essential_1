#include <iostream>

using namespace std;

int main(void) {
    int n;
	double result = 1.0;
    
    cout << "Enter the N number";
    cin >> n;

    for (int i = 0; i < n; i++) {
        result /= 2.0; 
    }

    cout.precision(20);
    cout << "2^" << n << "= " << result << endl;
	return 0;
}