#include <string>
#include <iostream>

using namespace std;

int main()
{
    string from;
    getline(cin, from);

    string to;
    getline(cin, to);

    string sentence;
    getline(cin, sentence);

    // change all occurrences of 'from' into 'to' in the sentence

    size_t pos = 0;
    while(pos = sentence.find(from, pos) != string::npos){
        sentence.replace(pos,from.length(), to);
        pos += to.length();
    }

    cout << sentence << "\n";
}