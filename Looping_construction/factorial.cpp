#include <iostream>

using namespace std;

int main() {
    // code here 
    int n;
    int res = 1;

    cout << "Please Enter the number" << endl;
    cin >> n;

    for(int i = 2; i <= n; i++){
        res *= i;
    }

    cout << "Factorial of " << n << " is " << res << endl;

    return 0;
}