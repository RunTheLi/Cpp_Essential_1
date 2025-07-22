#include <iostream>
using namespace std;

int main(void){
    unsigned int n;
    cout << "please enter the number: ";
    cin >> n;

    int notes[] = {50, 20, 10 ,5 ,1};

    for (int i = 0; i < 5; i++){
        while(n >= notes[i]){
            cout << notes[i] << " ";
            n -= notes[i];
        }
    }
    cout << endl;

    return 0;
}

/*Step-by-step breakdown:
Start with 125

Subtract 50 → 125 - 50 = 75

Subtract 50 → 75 - 50 = 25

Subtract 20 → 25 - 20 = 5

Subtract 5 → 5 - 5 = 0 */