/* Objectives
Familiarize the student with:

building a complex sequence of elementary operations;
choosing types and operations adequate to a problem;
careful code testing.
Scenario
Have you ever wondered how to find a weekday for any (past or future) date? Okay, you can check it in a calendar (you probably have one on your smartphone), but this is no solution for a coder. We do it the harder and more exciting way – we're going to write a program for it (did you ever suspect we were going to offer you anything else?)

One of the most popular algorithms for this task is the so-called "Zeller's congruence". Sounds complicated? Nothing could be further from the truth, and we're going to show you exactly that. You'll need three values:

year number (int – let's assume that we're interested only in dates from the 20th and 21st centuries);
month number (int – 1 to 12);
day number (int – 1 to it depends)
Be patient – this will take a while:

Decrease month number by 2;
if month number becomes less than 0, increment it by 12 and decrement year by 1;
take month number and multiply it by 83 and divide it by 32;
add day number to month;
add year number to month;
add year/4 to month;
subtract year/100 from month;
add year/400 to month;
find the remainder of dividing month by 7;
Congrats! A weekday number is ready for you! 0 – Sunday, 1 – Monday, ... and so on.
We want you to write a code which finds a weekday number for a date entered by a user. The program should ask the user for the year, month and day (in this order) and output a value indicating a weekday. */

#include <iostream>

using namespace std;

int main() {
    int year, month, day;

    cout << "Please enter year";
    cin >> year;
    cout << "please enter month";
    cin >> month;
    cout << "Please enter day";
    cin >> day;

    if (year < 1901 || year > 2099 || month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Invalid date input, please use valid 20th or 21th centuries date" << endl;
        return 1;
    } 

    month -= 2;
    if (month <= 0) {
        month += 12;
        year -= 1;
    }

    int weekday = ( month * 83) / 32;
    weekday += day;
    weekday += year;
    weekday += year / 4;


    return 0;
}