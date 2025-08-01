#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    int courses;
    cout << "Enter number of courses: ";
    cin >> courses;

    // Allocate an array of pointers (one per course)
    int **ptrarr = new int*[courses];  // ptrarr = pointer to array of int pointers
    int *numGrades = new int[courses]; // To store how many grades per course
    float totalFinal = 0.0;

    // Input grades for each course
    for (int i = 0; i < courses; i++) {
        cout << "Enter number of grades for course " << i + 1 << ": ";
        cin >> numGrades[i];

        ptrarr[i] = new int[numGrades[i]];  // Allocate grades array for course i

        cout << "Enter " << numGrades[i] << " grades: ";
        int sum = 0;
        for (int j = 0; j < numGrades[i]; j++) {
            cin >> ptrarr[i][j];
            sum += ptrarr[i][j];
        }

        float courseAvg = (float)sum / numGrades[i];
        totalFinal += courseAvg;

        // Output course result
        cout << fixed << setprecision(2);
        cout << "Course " << i + 1 << ": final " << courseAvg << ", grades:";
        for (int j = 0; j < numGrades[i]; j++) {
            cout << " " << ptrarr[i][j];
        }
        cout << endl;
    }

    // Output overall average
    cout << fixed << setprecision(2);
    cout << "Overall final " << totalFinal / courses << endl;

    // Clean up memory
    for (int i = 0; i < courses; i++) {
        delete[] ptrarr[i];  // delete each row
    }
    delete[] ptrarr;         // delete row pointers
    delete[] numGrades;      // delete grade count array

    return 0;
}
