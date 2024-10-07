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

/*
Enter the month (1-12): 12
Enter the day (1-31): 12
It is now Fall!
PS C:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U> cd "c:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U\" ; if ($?) { g++ Diaby_H_Homework_2_pART_ONE.cpp -o Diaby_H_Homework_2_pART_ONE } ; if ($?) { .\Diaby_H_Homework_2_pART_ONE }
Enter the month (1-12): 1
Enter the day (1-31): 2
It is now Winter!
PS C:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U> cd "c:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U\" ; if ($?) { g++ Diaby_H_Homework_2_pART_ONE.cpp -o Diaby_H_Homework_2_pART_ONE } ; if ($?) { .\Diaby_H_Homework_2_pART_ONE }
Enter the month (1-12): 8
Enter the day (1-31): 5
It is now Summer!
PS C:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U> cd "c:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U\" ; if ($?) { g++ Diaby_H_Homework_2_pART_ONE.cpp -o Diaby_H_Homework_2_pART_ONE } ; if ($?) { .\Diaby_H_Homework_2_pART_ONE }
Enter the month (1-12): 4
Enter the day (1-31): 12
It is now Spring!*/





