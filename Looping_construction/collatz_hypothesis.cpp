#include <iostream>
using namespace std;

int main() {
    int c0;
    int steps = 0;

    // Input
    cout << "Sample Input" << endl;
    cin >> c0;

    if (c0 <= 0) {
        cout << "Input must be a positive integer greater than 0." << endl;
        return 1;
    }

    // Collatz sequence
    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        } else {
            c0 = 3 * c0 + 1;
        }
        cout << c0 << endl;
        steps++;
    }

    cout << "steps = " << steps << endl;

    return 0;
}
