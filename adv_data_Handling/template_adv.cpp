#include <iostream>
#include <string>

using namespace std;

// Replace all occurrences of 'from' with 'to' in 'text'
void replaceAll(string &text, const string &from, const string &to) {
    size_t pos = text.find(from);
    while (pos != string::npos) {
        text.replace(pos, from.length(), to);
        pos = text.find(from, pos + to.length());
    }
}

int main() {
    string values;
    string sentence;

    cout << "Enter key=value pairs (comma separated): ";
    getline(cin, values);

    cout << "Enter sentence with placeholders: ";
    getline(cin, sentence);

    size_t start = 0;
    while (true) {
        size_t commaPos = values.find(',', start);
        string pair;

        if (commaPos == string::npos) {
            pair = values.substr(start); // Last pair
        } else {
            pair = values.substr(start, commaPos - start);
        }

        size_t equalPos = pair.find('=');
        if (equalPos != string::npos) {
            string key = pair.substr(0, equalPos);
            string val = pair.substr(equalPos + 1);
            replaceAll(sentence, "[" + key + "]", val);
        }

        if (commaPos == string::npos) break;
        start = commaPos + 1;
    }

    cout << sentence << endl;
}
