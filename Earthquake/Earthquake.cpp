#include <iostream>
using namespace std;

int main() {
    double magnitude;
    cout << "Please enter the Richter scale magnitude" << endl; // Requesting for the magnitude value
    cin >> magnitude;

    // Depending on the value the earthquake will get a category
    if (magnitude <= 0) {
        cout << "Invalid Value" << endl;
    } else if (magnitude < 2) {
        cout << "Micro Earthquake" << endl;
    } else if (magnitude < 4) {
        cout << "Minor Earthquake" << endl;
    } else if (magnitude < 6) {
        cout << "Moderate Earthquake" << endl;
    } else if (magnitude < 7) {
        cout << "Strong Earthquake" << endl;
    } else if (magnitude < 8) {
        cout << "Major Earthquake" << endl;
    } else if (magnitude >=8) {
        // Anything past the value 8 will be categorised as "Great"
        cout << "Great Earthquake" << endl;
    }

return 0;
}