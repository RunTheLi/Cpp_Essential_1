#include <iostream>

using namespace std;

int main(void) {

	unsigned short int val;
	bool ispalindrome = false;

	cout << "value = ";
	cin >> val;

	// Insert your code here
    int left = 15; // MSB for 16-bit number
    int right = 0; // LSB
    
    while(left > right) {
        bool left_bit = (val >> left) & 1;
        bool right_bit = (val >> right) & 1;

        if(left_bit != right_bit){
            ispalindrome = false;
            break;
        }
        left--;
        right++;
    }


	if(ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;	
	return 0;
}