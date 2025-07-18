#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // code here
    int n;
    cout << "Please Enter the number > 0" << endl;
    cin >> n;

    if (n < 0) {
        cout << "Please Enter number more than 0";
        return 1;
    }

    unsigned long long a = 0, b = 1, fibbo;

    if ( n == 0 ){
        fibbo = 0;
    } else if ( n == 1) {
        fibbo = 1;
    } else {
        for (int i = 2; i <= n; i++){
            fibbo = a + b;
            a = b;
            b = fibbo;
        }
    }

    cout << "Fibonacci number at position " << n << " is: " << fibbo << endl;
    return 0;
}
