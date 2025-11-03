# number-guessing-game-
A simple C program where the computer randomly selects a number, and the player tries to guess it. The program gives hints if the guess is too high or too low and shows the number of attempts when the correct guess is made.
Description:
A simple Number Guessing Game in C where the computer generates a random number, and the player has to guess it. The program gives hints like “Too High” or “Too Low” until the correct number is guessed.

Features:

Random number generation

User input and feedback

Counts number of attempts

Simple and interactive console interface

How It Works:

The program uses the rand() function to generate a random number within a set range (e.g., 1–100).

The player enters a guess through the keyboard.

The program checks the guess:

Displays "Too High" if the guess is greater.

Displays "Too Low" if the guess is smaller.

This continues until the correct number is guessed.

When guessed correctly, it shows a congratulatory message and the total number of attempts.

How to Run:

Compile the program using:

gcc number_guess.c -o number_guess


Run the executable:

./number_guess


Follow the on-screen instructions to play the game.
