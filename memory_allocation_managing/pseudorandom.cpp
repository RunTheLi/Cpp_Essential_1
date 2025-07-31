#include <iostream>
#include <cstdlib>
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
    int *draw = new int[ballsno];
    int count = 0;

    for(int i = 0; i < ballsno; i++){

        int num = rand() % maxball + 1;

        bool duplicate = false;
        for(int j = 0; j < i; j++){
            if(draw[j] == num){
                duplicate = true;
                break;
            }
        }

        if (duplicate){
            i--;
            continue;
        }

        draw[i] = num;
    }
    cout << "Draw numbers: ";
    for(int i = 0; i < ballsno; i++){
        cout << draw[i] << " ";
    }
    cout << endl;

    delete[] draw;
	return 0;
}