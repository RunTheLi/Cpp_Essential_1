#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));

	// Insert your code here
    if (ballsno > maxball){
        cout << "rror: Cannot draw more balls than available" << endl;
        return 1;
    }

    int* draw = new int[ballsno];
    int count = 0;

    while (count < ballsno){
        int num = rand() % maxball + 1;

        bool alreadyDrawn = false;
        for (int i = 0; i < count; i++) {
            if (drawn[i] == num) {
                alreadyDrawn = true;
                break;
            }
        }

        if (!alreadyDrawn) {
            drawn[count++] = num;
        }
    }

    cout << "Drawn balls: ";
    for (int i = 0; i < ballsno; i++) {
        cout << drawn[i] << " ";
    }
    cout << endl;

    // Clean up
    delete[] drawn;


	return 0;
}