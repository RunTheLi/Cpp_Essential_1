/* Objectives
Familiarize the student with:

finding information useful to solving typical problems;
implementing a simple conversational interface;
constructing branched, multifunctional code;
preparing clearly formatted output.
Scenario
Among the many measurement systems available, two seem to be the most widespread: metric and imperial. To make things simpler, we assume that the first one uses the "meter" as its only unit (expressed as a real number), while the second uses the "foot" (always an integer) and the "inch" (a real number).

Your task is to write a simple "measurement converter". We want it to perform the following actions:

ask the user which system she/he uses to input data; we assume that 0 means "metric" and 1 means "imperial";
depending on the user's answer, ask either for meters or feet and inches;
output the distance in proper (different) units: either in feet and inches or in meters;
a result outputted as metric should look like 123.4m;
a result outputted as imperial should look like 12'3.5".
Look at the code in the editor – it's only a template. Use it to implement the whole converter.

Make your code smart – it shouldn't be fooled by stupid or unreasonable inputs. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int   sys;
	float m, ft, in;
    int ift;

    cout << "What is your measurement system? 0-metric/1-imperial: ";
    cin >> sys;
    //matrics
    if (sys == 0) {
        cout << "m = ";
        cin >> m;

        in = m / 0.0254;
        ift = in /12;
        in = in - (ift * 12);
		cout << ift << "'" << in << "\"" << endl;
    } 
    // imperial
    else if (sys == 1) {
        cout << "ft = ";
        cin >> ft;
        cout << "in = ";
        cin >> in;

        in += 12* ft;

        m = in * 0.0254;

        cout << m << "m" << endl;
    }
    return 0;
}