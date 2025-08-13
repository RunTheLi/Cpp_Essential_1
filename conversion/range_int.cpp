#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Please Enter thr number: ";
    cin >> n;

    long long sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "Sum for " << n << " is " << sum << endl;
    return 0;
}
