#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

	// Insert your code here
    int* ptr = &matrix[0][0];

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            *(ptr + i * 10 + j) = (i + 1) * (j + 1);
        }
    }

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}