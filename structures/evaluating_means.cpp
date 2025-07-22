#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	// Insert your code here

    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += vector[i];
    }
    ArithmeticMean = sum /n;

    double harmonicSum = 0.0;
    for(int i = 0; i < n; i++){
        harmonicSum += 1.0 / vector[i];
    }
    HarmonicMean = n / harmonicSum;
    
    double geometricSum = 1.0;
    for(int i = 0; i < n; i++){
        geometricSum *= vector[i];
    }
    GeometricMean = pow(geometricSum, 1.0 / n);
    
    double rootSum = 0.0;
    for(int i = 0; i < n; i++){
        rootSum += vector[i] * vector[i];
    }
    RootMeanSquare = sqrt(rootSum / n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}
