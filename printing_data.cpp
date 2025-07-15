/* 2.3
2.123456
2.123456
2.123456 */

// to //

/*2.3
2.30
2.123456
2.12
2*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    float v1 = 2.3;
    float v2 = 2.3;
    float v3 = 2.123456;
    float v4 = 2.123456;
    float v5 = 2.123456;
    
    cout << fixed << setprecision(1) << v1 << endl;
    cout << fixed << setprecision(2) << v2 << endl;
    cout << fixed << setprecision(6) << v3 << endl;
    cout << fixed << setprecision(2) << v4 << endl;
    cout << fixed << setprecision(0) << v5 << endl;
    
    return 0;
}