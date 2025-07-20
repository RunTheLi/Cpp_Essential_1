#include <iostream>

using namespace std;

int main(){
    // code here
    int n;

    cout << "Please enter integer number (it must be odd): ";
    cin >> n;

    if(n % 2 == 0 || n <= 0 ){
        cout << "Invalid input. n must be odd umber and positive" <<endl;
        return 1;
    }

    int result = n* n - (n - 1);

    cout << "the number in the bottom right tile is: " << result << endl;
    return 0;
}