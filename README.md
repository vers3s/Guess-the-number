# Guess the Number Game with Binary Search

This program is a simple "Guess the Number" game implemented in C++ using binary search. The user interacts with the program to guide it toward the secret number through higher, lower, or correct responses. 

## Features

- **Interactive Gameplay**: The program guesses the number by following the user's feedback.
- **Efficient Binary Search**: Leverages binary search to minimize the number of guesses.
- **Error Handling**: Handles invalid user inputs gracefully.

---

## How It Works

1. **Secret Number Generation**:  
   A random secret number between 1 and 100 is generated when the game starts.

2. **Binary Search Logic**:  
   The program makes a guess by choosing the middle number between the current low and high bounds.

3. **User Input**:  
   The user provides feedback on the guess by entering:
   - `'h'` (higher) if the secret number is greater than the guess.
   - `'l'` (lower) if the secret number is less than the guess.
   - `'c'` (correct) if the guess matches the secret number.

4. **Game End**:  
   The game ends when the program guesses the correct number. It displays the total number of attempts.

---

## Requirements

- **Compiler**: Any C++ compiler supporting C++11 or later (e.g., GCC, Clang, or MSVC).
- **Environment**: The program is platform-independent and can run on Windows, Linux, or macOS.

---

## How to Run the Program

1. **Clone or Copy the Code**:
   Save the code into a file named `guess_number.cpp`.

2. **Compile the Program**:
   Open a terminal or command prompt and run:
   ```bash
   g++ guess_number.cpp -o guess_number
   ```

3. **Run the Executable**:
   Execute the compiled program:
   ```bash
   ./guess_number
   ```

4. **Play the Game**:
   Follow the on-screen instructions to guide the program toward the secret number.

---

## Example Gameplay

1. **Start the Game**:
   ```plaintext
   Welcome to the 'Guess the Number' game with Binary Search!
   I have selected a number between 1 and 100.
   Can you guess what it is? Let's begin!
   ```

2. **Program's Guess and Your Feedback**:
   ```plaintext
   Is the number 50? (Enter 'h' for higher, 'l' for lower, 'c' for correct): h
   Is the number 75? (Enter 'h' for higher, 'l' for lower, 'c' for correct): l
   Is the number 62? (Enter 'h' for higher, 'l' for lower, 'c' for correct): c
   Congratulations! You guessed the number in 3 attempts.
   ```

---

## Error Handling

- If the user enters an invalid character (anything other than `'h'`, `'l'`, or `'c'`), the program prompts the user to provide a valid input.
- If the binary search bounds become invalid (`low > high`), the program terminates with an error message.

---

## Customization

- **Range Modification**:  
  To change the range, adjust the `low` and `high` variables and update the random number generation logic:
  ```cpp
  int secretNumber = rand() % (new_range) + lower_bound;
  ```

- **Secret Number**:  
  For debugging, you can print the secret number at the start of the game:
  ```cpp
  cout << "Secret Number: " << secretNumber << endl;
  ```

---

## vers3s

This code was written as a fun and educational exercise to demonstrate binary search and interactive programming in C++.

Enjoy playing the game! 
