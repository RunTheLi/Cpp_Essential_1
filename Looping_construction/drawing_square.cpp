#include <iostream>

using namespace std;

int main(void) {
    int n;
    cout << "Enter n num: ";
    cin >> n;

    if (n > 100){
        cout << "Sorry, the side size is too big" << endl;
        return 1;
    }

    if (n < 2) {
        cout << "Size too small to draw box" << endl;
        return 1;
    }

	cout << '+';

	for(int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < n - 2 ; i++) {
		cout << '|';
		for(int j = 0; j < n - 2; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;

	return 0;
}