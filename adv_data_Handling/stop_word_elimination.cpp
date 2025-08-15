#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string stop_line;
    string sentence;

    getline(cin, sentence);

    getline(cin, stop_line);

    vector<string> stop_words;
    string temp;
    stringstream sw_stream(stop_line);
    while(getline(sw_stream, temp, ',')){
        stop_words.push_back(temp);
    }

    stringstream sen_stream(sentence);
    string word;
    string result = "";

    while(sen_stream >> word) {
        string lower_word = word;
        transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);

        bool is_stop = false;
        for (string sw : stop_words) {
            if(lower_word == sw) {
                is_stop = true;
                break;
            }
        }
        if(!is_stop) {
            if(!result.empty()) result += " ";
            result += word;
        }
    }
    
    cout << sentence << "\n";
}