#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	// x2 : squared x (to simplify final expression)
	float x2 = x * x;	

	// pi2 : squared pi (as above)
	float pi2 = pi * pi;	
	
	// note: we use 0.5 instead of 1./2. - don't use 1/2 because it's equal to 0!
	y = ( x2 / (pi2 * (x2 + 0.5) )) * ( 1 + (x2 / (pi2 * (x2 - 0.5) * (x2 - 0.5) )));
	
	cout << "y = " << y << endl;
	return 0;
}

// Second question
#include <iostream>

using namespace std;

int main(void) {
	int i, j, k;
	
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	
	// increment i by 2
	i += 2; 	

	// decrement j by i
	j -= i;		

	// divide i by j giving k
	k = i / j;	

	// increment k by k
	k += k;		

	// decrement k by 1
	k--;		

	// assign k modulo i to j
	j = k % i;	

	// increment k by k added to i
	k += (k + i);	

	// increment k by k divided by j
	k += (k / j);	

	// assing k times k times k to k
	k = k * k * k; 	

	// increment k by i times j
	k += (i * j);	
	
	cout << k << endl;
	return 0;
}