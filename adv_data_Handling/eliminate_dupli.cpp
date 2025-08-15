#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    // manipulate the sentence here
    stringstream ss(sentence);
    string word, prev = "";
    string result = "";

    while(ss >> word){
        if(word == prev){
            continue;
        }
        if(!result.empty()) result += " ";
        result += word;
        prev = word;
    }

    cout << sentence << endl;
}