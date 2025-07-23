#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
};

int main(){
    // code here
    int duration;
    Time t;

    cout << "Please Enter Hours: ";
    cin >> t.hours;

    cout << "Please Enter minutes: ";
    cin >> t.minutes;

    if(t.hours < 0 && t.hours >= 24 || t.minutes < 0 && t.minutes >= 60){
        cout << "Invalid input" << endl;
        return 1;
    }

    cout << "Please enter duration (minutes): ";
    cin >> duration;


    int total_minutes = t.hours * 60 + t.minutes + duration;
    t.hours = (total_minutes / 60) % 24;
    t.minutes = total_minutes % 60;

    cout << "Time after event: ";
        if (t.hours < 10) cout << "0";
        cout << t.hours << ":";

        if (t.minutes < 10) cout << "0";
        cout << t.minutes << endl;
    return 0;
}