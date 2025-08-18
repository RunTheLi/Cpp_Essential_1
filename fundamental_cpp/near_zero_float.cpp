/*
#include <iostream>
#include <iomanip>
#include <cmath>

bool isCloseEnough(float a, float b, float epsilon){
    return fabs(a-b) < epsilon;
}

using namespace std;

int main(void) {
    
    // code here
    float epsilon = 0.000001;
    
    float v1 = 2.3;
    float v2 = 2.3;
    float v3 = 2.123456;
    float v4 = 2.123456;
    float v5 = 2.123456;

    int num1 = 1011;
    int num2 = 1112;
    
    bool equal = isCloseEnough(v1, v2, epsilon) &&
                 isCloseEnough(v2, v3, epsilon) &&
                 isCloseEnough(v3, v4, epsilon) &&
                 isCloseEnough(v4, v5, epsilon);            
                 
    if(equal) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <iomanip>
#include <cmath>

bool isCloseEnough(float a, float b, float epsilon) {
    return fabs(a - b) < epsilon;
}

using namespace std;

int main(void) {
    float epsilon = 0.000001;
    int num1, num2;

    cout << "Enter 2 integer values:\n";
    cin >> num1 >> num2;

    // Prevent division by zero
    if (num1 == 0 || num2 == 0) {
        cout << "Division by zero is not allowed." << endl;
        return -1;
    }

    // Perform division and convert to float
    float v1 = 1.0f / num1;
    float v2 = 1.0f / num2;

    // Compare with epsilon
    if (isCloseEnough(v1, v2, epsilon)) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}

