#include <string>
#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

    bool isValid(const string& s) {
    for (char ch : s) {
        if (!isalpha(ch) && ch != ' ') return false;
    }
    return true;
}


string createTemplate(const string& person, const string& action, const string& place){
    return person + action + place + '.';
}

int main()
{
    string person, action, place;

    cout << "Enter your person: ";
    getline(cin, person);

    cout << "Enter your action: ";
    getline(cin, action);

    cout << "Enter your place: ";
    getline(cin, place);
    // Put values into the template

    if (!isValid(person)) {
        cout << "Invalid person input\n";
        return 0;
    }
    if (!isValid(action)) {
        cout << "Invalid action input\n";
        return 0;
    }
    if (!isValid(place)) {
        cout << "Invalid place input\n";
        return 0;
    }

    string templateStr = "[person] [action] [place]";
    size_t pos;
    pos = templateStr.find("[person]");
    if (pos != string::npos) templateStr.replace(pos, 8, person);

    pos = templateStr.find("[action]");
    if (pos != string::npos) templateStr.replace(pos, 8, action);

    pos = templateStr.find("[place]");
    if (pos != string::npos) templateStr.replace(pos, 7, place);

    // Output
    cout << templateStr << endl;
    return 0;
}