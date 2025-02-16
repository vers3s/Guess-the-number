#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int secretNumber = rand() % 100 + 1;      
    int low = 1, high = 100;                  
    int guess;
    int attempts = 0;

    cout << "Welcome to the 'Guess the Number' game with Binary Search!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is? Let's begin!" << endl;

    while (true) {
        guess = (low + high) / 2; 
        attempts++;

        cout << "Is the number " << guess << "? (Enter 'h' for higher, 'l' for lower, 'c' for correct): ";
        char response;
        cin >> response;

        if (response == 'c') {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        } else if (response == 'h') {
            low = guess + 1; 
        } else if (response == 'l') {
            high = guess - 1; // Adjust the upper bound
        } else {
            cout << "Invalid input! Please enter 'h', 'l', or 'c'." << endl;
        }

        if (low > high) {
            cout << "Something went wrong! Check the logic or inputs." << endl;
            break;
        }
    }

    return 0;
}

