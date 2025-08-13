#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    // Write your code here
    map<char, int>freq;

    for(char ch : input) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            freq[ch]++;
        }
    }

    if (freq.size() == 26){
        cout << "Pangram" << endl;
    } else {
        cout << "Not Pangrgam" << endl;
    }

    for(char c = 'a'; c <= 'z'; c++){
        if(freq[c] > 0) {
            cout << c << "-" << freq[c] << endl;
        }
    }

    return 0;
}
