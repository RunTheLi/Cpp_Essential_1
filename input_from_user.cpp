#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    //code here
    int num1, num2, num3, num4;

    cout << "Enter four numbers for the IP address: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    if ((num1 >= 1 && num1 <= 255) &&
        (num2 >= 1 && num2 <= 255) &&
        (num3 >= 1 && num2 <= 255) &&
        (num4 >= 1 && num4 <= 255)) {

        cout << "Your IP number is: "
             << num1 << "." << num2 << "." << num3 << "." << num4 << "." << endl;
    } else {
        cout <, "Invalid input"
    }
    return 0;
}