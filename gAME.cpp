#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int secret_num, guess;
  int num_guesses = 0;
  srand(time(NULL)); // Seed random number generator
  secret_num = rand() % 100 + 1; // Generate random number between 1 and 100

  printf("Welcome to the guessing game!\n");
  printf("I'm thinking of a number between 1 and 100.\n");
  
  do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    num_guesses++;

    if (guess < secret_num) {
      printf("Too low! Try again.\n");
    } else if (guess > secret_num) {
      printf("Too high! Try again.\n");
    } else {
      printf("Congratulations! You guessed the number in %d tries.\n", num_guesses);
    }
  } while (guess != secret_num);

  return 0;
}

