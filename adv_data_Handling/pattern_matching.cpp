#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool matchPattern(string pattern, string text){
    
    if(pattern.size() != text.size()){
        return false;
    }

    for (int i = 0; i < pattern.size(); i++){
        char p = pattern[i];
        char t = text[i];

        if (p == 'D') {
            if (!isdigit(t)) return false;
        }
        else if (p == 'A') {
            if (!isalpha(t)) return false;
        }
        else if (islower(p)){
            if(tolower(t) != p) return false;
        }
        else if (p == '?'){
            // always match do nothing
        }
        else {
            if (p != t) return false;
        }
    }
    return true;
}


int main() {
    string pattern, sentence;

    // read pattern and sentence
    cout << "Enter pattern: ";
    getline(cin, pattern);
    cout << "Enter sentence: ";
    getline(cin, sentence);

    int n = pattern.size();

    // check every substring of sentence with same length as pattern
    for (int i = 0; i + n <= sentence.size(); i++) {
        string sub = sentence.substr(i, n);
        if (matchPattern(pattern, sub)) {
            cout << sub << endl;
        }
    }

    return 0;
}