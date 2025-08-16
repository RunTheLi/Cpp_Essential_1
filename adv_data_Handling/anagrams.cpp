#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(string &s1, string &s2) {
    
    if (s1.length() != s2.length()) 
        return false;
    
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    return (s1 == s2);
}

int main(void){
    string s1;
    string s2;

    cout << "Please Enter first word: " << endl;
    cin >> s1;
    cout << "Please Enter two word: " << endl;
    cin >> s2;

    if(areAnagrams(s1, s2)){
	    cout << "anagrams" << endl;
	} 
	else{
	    cout << "not anagrams" << endl;
	}

    return 0;
}