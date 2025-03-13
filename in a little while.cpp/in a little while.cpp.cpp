// in a little while.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Part 1: Guess the number game
    srand(time(0));  // Initialize random seed

    int randomNumber = rand() % 10 + 1;  // Generate random number between 1 and 10
    int guess;

    cout << "Guess the number (between 1 and 10): ";
    cin >> guess;

    // Loop until the user guesses correctly
    while (guess != randomNumber) {
        if (guess < randomNumber) {
            cout << "Too low. Try again: ";
        }
        else {
            cout << "Too high. Try again: ";
        }
        cin >> guess;
    }

    cout << "Correct! The number was " << randomNumber << ".\n" << endl;

    // Part 2: Secret password check
    string secretPassword = "hello123";
    string enteredPassword;

    cout << "Enter the secret password: ";
    cin >> enteredPassword;

    // Loop until the correct password is entered
    while (enteredPassword != secretPassword) {
        cout << "Incorrect. Try again: ";
        cin >> enteredPassword;
    }

    cout << "Access Granted!" << endl;

    return 0;
}
