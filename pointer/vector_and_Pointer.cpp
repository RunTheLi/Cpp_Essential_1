#include <iostream>
using namespace std;

int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int* ptr = vector;           // pointer to the first element
    int* end = vector + n;       // pointer to one past the last element
    int min = *ptr;              // initialize min with the first value

    for (; ptr < end; ++ptr) {
        if (*ptr < min) {
            min = *ptr;
        }
    }

    cout << "Smallest element: " << min << endl;

    return 0;
}
