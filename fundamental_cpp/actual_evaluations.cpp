/* Objectives
Familiarize the student with:

building a complete program that solves simple actual problems;
cautious treatment of the input data;
protecting code from incorrect input data.
Scenario
Wherever you are and whatever you pay for, you usually spend your money on two things: the first is for a good or service you are buying, and the second is taxes. This means that the amount of money you are transferring (named "gross price") to the seller is a sum of the actual price (named "net price") and the tax. The tax is calculated as a percentage of the net price and its rate depends on a lot of unpredictable factors (e.g. where you live, what you buy, etc., etc., etc.).

Your task is to write a simple "tax calculator" – it should accept two values: a gross price and a tax rate expressed as a percentage (i.e. a value greater than 0 and, let's be optimistic, less than 100).

Look at the code below – it only reads two input values and outputs the results, so you need to complete it with a few smart calculations.

It would be good to verify if the values entered are reasonable (e.g. gross price is greater than zero and tax rate falls into the previously mentioned range). */

#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() {
    float grossPrice, taxRate;

    cout << "Please enter your gross price: ";
    cin >> grossPrice;

    cout << "Please enter your tax rate (%): ";
    cin >> taxRate;

    // Validation
    if (grossPrice <= 0 || taxRate <= 0 || taxRate >= 100) {
        cout << "Invalid input. Gross price must be > 0 and tax rate must be > 0 and < 100." << endl;
        return 1;
    }

    // Calculations
    float netPrice = grossPrice / (1 + taxRate / 100);
    float taxValue = grossPrice - netPrice;

    // Output with 4 decimal precision
    cout << fixed << setprecision(4);
    cout << "Net price: " << netPrice << endl;
    cout << "Tax value: " << taxValue << endl;

    return 0;
}
