// InsulinCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// data
int carbs;
int sugar;
int InsulinCarbRatio;
int goal;
int SFactor;


int main()
{
    std::cout << "How many carbs are you/were you eating?\n";
    std::cin >> carbs;

    std::cout << "What is your Glucose Level (before eating)?\n";
    std::cin >> sugar;

    std::cout << "How many carbs per unit?\n";
    std::cin >> InsulinCarbRatio;

    std::cout << "What is your sensitivity factor?\n";
    std::cin >> SFactor;

    std::cout << "What is your goal glucose level?\n";
    std::cin >> goal;

    std::cout << (carbs/InsulinCarbRatio)+((sugar-goal)/SFactor);

    std::cin.get();
    std::cin.get();
}
