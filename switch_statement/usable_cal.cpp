#include <iostream>
using namespace std;

int main() {
    float a, b;
    int choice;
    bool exit = false;

    while (!exit) {
        cout << "\nMenu" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            exit = true;
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "A = ";
            cin >> a;
            cout << "B = ";
            cin >> b;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << a << " + " << b << " = " << a + b << endl;
                break;
            case 2:
                cout << "Result: " << a << " - " << b << " = " << a - b << endl;
                break;
            case 3:
                cout << "Result: " << a << " * " << b << " = " << a * b << endl;
                break;
            case 4:
                if (b == 0.0) {
                    cout << "Cannot divide by 0!" << endl;
                } else {
                    cout << "Result: " << a << " / " << b << " = " << a / b << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
