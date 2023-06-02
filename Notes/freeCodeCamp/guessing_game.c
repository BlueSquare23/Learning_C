#include<stdio.h>
#include <stdlib.h>

int main(){
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses == 0){
		if(guessCount < guessLimit){
			printf("Guess a number: ");
			scanf("%d", &guess);	// Throw input into guess var
			guessCount++;
		} else {
			outOfGuesses = 1;
		}
	}

	if(outOfGuesses == 1){
		printf("You're out of guesses.\n");
	} else {
		printf("You Win!\n");
	}

	return 0;
}
