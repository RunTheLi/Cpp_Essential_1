#include <string>
#include <iostream>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    bool inStar = false;
    bool inUnd = false;
    string out;

    for (char ch : sentence) {
        if(ch == '*') {
            if (!inUnd) { // only toggle if NOT inside _
                inStar = !inStar;
                continue;
            }
        }
        else if (ch == '_') {
            if (!inStar) { // only toggle if NOT inside *
                inUnd = !inUnd;
                continue;
            }
        }

        if(inStar && isalpha(ch)){
            out.push_back(toupper(ch));
        } else if (inUnd && isalpha(ch)){
            out.push_back(ch);
            out.push_back(' ');
        } else {
            out.push_back(ch);
        }
    }

    cout << out << "\n";  // print transformed text, not original
    return 0;
}
