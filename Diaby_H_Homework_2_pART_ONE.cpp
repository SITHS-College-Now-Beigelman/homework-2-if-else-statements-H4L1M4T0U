// Halimatou Diaby
// Homework #2 - if Statements
//10/1/24


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int month, day;

    // Get user input
    cout << "Enter the month (1-12): ";
    cin >> month;
    cout << "Enter the day (1-31): ";
    cin >> day;

    // Determine the season
    if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day <= 20)) {
        cout << "It is now Spring!" << endl;
    } else if ((month == 6 && day >= 21) || (month == 7) || (month == 8) || (month == 9 && day <= 22)) {
        cout << "It is now Summer!" << endl;
    } else if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day <= 21)) {
        cout << "It is now Fall!" << endl;
    } else if ((month == 12 && day >= 22) || (month == 1) || (month == 2) || (month == 3 && day <= 20)) {
        cout << "It is now Winter!" << endl;
    } else {
        cout << "Invalid date input. Please enter a valid month (1-12) and day (1-31)." << endl;
    }

    return 0;
}


