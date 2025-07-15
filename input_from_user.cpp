#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "Enter four numbers for the IP address: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Allow 0–255 (inclusive) for all numbers
    if ((num1 >= 0 && num1 <= 255) &&
        (num2 >= 0 && num2 <= 255) &&
        (num3 >= 0 && num3 <= 255) &&
        (num4 >= 0 && num4 <= 255)) {
        
        // Print in IP format
        cout << "Your IP address is: " << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    } else {
        cout << "Invalid input. Each number must be between 0 and 255." << endl;
    }

    return 0;
}
