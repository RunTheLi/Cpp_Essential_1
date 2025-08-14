#include <iostream>
#include <string>
using namespace std;

string check_ip(string ip){
    // 1. Check only digits and dots
    for(int i = 0; i < ip.size(); i++){
        if(!(ip[i] >= '0' && ip[i] <= '9') && ip[i] != '.') {
            return "Only digits and dots allowed";
        }
    }

    // 2. Split into parts
    string parts[5];
    int partIndex = 0;
    string current = "";

    for (int i = 0; i < ip.size(); i++){
        if(ip[i] == '.'){
            parts[partIndex] = current;
            partIndex++;
            current = "";
        } else {
            current += ip[i];
        }
    }
    parts[partIndex] = current;
    partIndex++;

    // 3. Check count
    if(partIndex != 4){
        return "Incorrect parts count";
    }

    //4. check for each part
    for(int i = 0; i < 4; i++){
        if(parts[i].size() == 0 || parts[i].size() > 3) {
            return "Too many characters in the part";
        }
        int value = stoi(parts[i]);
        if(value > 255) {
            return "Too big a value of a part";
        }
    }
    return "Correct IP";
}

int main(void){
    //code here
    string ips[] = {
        "1.2.3.4",
        "255.255.255.255",
        "355.255.255.255",
        "1000.255.255.255",
        "ASD.255.255.255"
    };

    for (int i = 0; i < 5; i++){
        cout << check_ip(ips[i]) << endl;
    }
    return 0;
}
