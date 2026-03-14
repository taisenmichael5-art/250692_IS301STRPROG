/*
Full Name: Taisen Marainump
Student ID: 250692
Date: 14/03/2026
Algorithm: 
1. Generate random number between 1 and 20.
2. Give user 5 attempts to guess.
3. After each guess, provide feedback (too high, too low, correct).
4. If correct, terminate immediately with success message.
5. If incorrect after 5 tries, display the number and sorry message.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations
int getUserGuess();
void printSuccessMessage();
void printHint(int guess, int number);
void printSorryMessage(int number);

int main() {
    int number, guess, attempts;

    // Seed random number generator
    srand(time(0));
    number = rand() % 20 + 1; // random number between 1 and 20

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    for (attempts = 1; attempts <= 5; attempts++) {
        guess = getUserGuess();

        if (guess == number) {
            printSuccessMessage();
            return 0; // terminate program immediately
        } else {
            printHint(guess, number);
        }
    }

    // If user fails after 5 attempts
    printSorryMessage(number);

    return 0;
}

// Function to get user guess
int getUserGuess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

// Function to print success message
void printSuccessMessage() {
    printf("Congratulations! You did it.\n");
}

// Function to print hint messages
void printHint(int guess, int number) {
    if (guess < number) {
        printf("Your guess is low. Try again:\n");
    } else {
        printf("Your guess is high. Try again:\n");
    }
}

// Function to print sorry message
void printSorryMessage(int number) {
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}
