//Halimatou Diaby
//Homework 2 Part two
//10/4/24




#include <iostream>
using namespace std;

int main() {
    const int numJudges = 6;
    double score, total = 0.0;
    double highest = 0.0, lowest = 10.0; // Initialize high and low extremes

    cout << "Enter the 6 judge scores: " << endl;

    // Loop to input each score one by one
    for (int i = 1; i <= numJudges; i++) {
        cin >> score;

        // Keep track of the highest and lowest scores
        if (score > highest) highest = score;
        if (score < lowest) lowest = score;

        // Add each score to the total sum
        total += score;
    }

    // Subtract the highest and lowest from the total
    total = total - highest - lowest;

    // Calculate the average of the remaining 4 scores
    double finalScore = total / 4.0;

    // Print the final score
    cout << "The final score is: " << finalScore << endl;

    return 0;
}


/*
Enter the 6 judge scores: 
12
13
14
15
18
1
The final score is: 13.5
PS C:\Users\halim\OneDrive\Documents\GitHub\homework-2-if-else-statements-H4L1M4T0U> */