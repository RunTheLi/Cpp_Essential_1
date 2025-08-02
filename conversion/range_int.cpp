#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Please Enter thr number: ";
    cin >> n;

    for(int i = 1; i < n; i++){
        if(n > i){
            n = n + i;
            i++;
        }
    }

    cout << n << endl;
    return 0;
}
