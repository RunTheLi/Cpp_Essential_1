#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool hasSpecialChar(const string& password){
    for (char ch : password){
        if(!isalnum(ch)) return true;
    }
    return false;
}

bool hasUpperCase(const string& password){
    for (char ch : password){
        if(!isupper(ch)) return true;
    }
    return false;
}

bool hasDigit(const string& password){
    for (char ch : password){
        if(!isdigit(ch)) return true;
    }
    return false;
}

int main()
{
    string password;
    cout << "Enter a password: ";
    getline(cin, password);

    if (password.length() < 8) {
        cout << "The password must be at least 8 characters long" << endl;
    } else if (!hasDigit(password)) {
        cout << "The password must have at least one digit" << endl;
    } else if (!hasSpecialChar(password)) {
        cout << "The password must have at least one special character" << endl;
    } else if (!hasUpperCase(password)) {
        cout << "The password must have at least one uppercase letter" << endl;
    } else {
        cout << "Password is valid!" << endl;
    }

    return 0;
}
