/* InsulinCalc.cpp : This file contains the 'main' function. Program execution begins and ends there. */

#include <iostream>
using namespace std;

float carbs;
float sugar;
float InsulinCarbRatio;
float goal;
float SFactor;
float output;

int main() {
    cout << "How many carbs are you/were you eating?\n";
    cin >> carbs;

    cout << "What is your Glucose Level (before eating)?\n";
    cin >> sugar;

    cout << "How many carbs per unit?\n";
    cin >> InsulinCarbRatio;

    cout << "What is your sensitivity factor?\n";
    cin >> SFactor;

    cout << "What is your goal glucose level?\n";
    cin >> goal;

    output = (carbs/InsulinCarbRatio)+((sugar-goal)/SFactor);
    cout << "Output: " << output << "\n";
    return 0;
}
