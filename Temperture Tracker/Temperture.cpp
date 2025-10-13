#include <iostream>
using namespace std;

int main () {
    const int totaldays = 30; // Only goes up to 30 days
    double temp;
    double sum = 0; // Starts at 0
    int above25; // How many days go above 25C

    for (int day = 1; day <= 30; day++) { // Will ask the user 30 times (one for each day)
    cout << "Enter the temperture of the day " << day << ": ";
    cin >> temp;

    sum = sum + temp;

    if (temp > 25) {
        above25 = above25 + 1; // Everytime a day is above 25C it will add one to the counter
        }
    }

    double average = sum / totaldays; // Average temperture of the 30 days

    cout << "Average temperture: " << average << "C" << endl; // Presents the the average temperture
    cout << "Days above 25: " << above25 << " Day(s)" << endl; // Shows how many times the days are above 25C

return 0;
}