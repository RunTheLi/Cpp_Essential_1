#include <iostream>

using namespace std;

int main() {
    //code here
    int h;
    cout << "Please Enter height";
    cin >> h;
    
	if (h <= 2 || h >= 9){
        cout << "Invalid height! pleasae try again" << endl;
        return 1;
    }

    for (int i = 0; i < h; i++){
        for (int p = 0; p < 3; p++){
            for (int s = 0; s < h - i - 1; s++)
                cout << ' ';

            for (int star = 0; star < 2 * i + 1; star++)
                cout << '*';

            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}