#include <iostream>

using namespace std;

int main(){
    // code here
    unsigned int n;
    unsigned long int result = 1;

    cout << "input the number" << endl;
    cin >> n;

    if ( n > 63 ) {
        cout << "Error!";
        return 1;
    }

    for (unsigned int i = 0; i < n ;i++){
        result *= 2;
    }

    cout << "2^" << n << " = " << result << endl;
    return 0;
}