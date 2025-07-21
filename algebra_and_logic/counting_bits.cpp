#include <iostream>
using namespace std;

int main() {
    unsigned long n;
    int count = 0;

    cout << "Enter the number you want to find bits set to 1: ";
    cin >> n;

    while (n > 0) {
        if (n % 2 == 1) {
            // bit is 1
            count++;
        }
        // Move to the next bit by dividing by 2
        n = n / 2;
    }

    cout << "Number of 1-bits: " << count << endl;

    return 0;
}
