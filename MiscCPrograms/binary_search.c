#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

/* This is my attempt at binary search in C. The goal of this algorithm is to
 * find the user supplied target value by stepping through various guess
 * values. */

int main(int argc, char *argv[]){

	int upper_bound = 100;
	int lower_bound = 0;
	int guess = 50;

	int target = atoi(argv[1]);

	// Check supplied target is between 0 and 100.
	if (target <= 0 || target >= 100){
		printf("Usage: ./binary_search INT\n");
		printf("Where INT is some integer between 0 and 100.\n");
		return 0;
	}

	// Loop until the guess matches the target.
	while (target != guess){
		if (target > guess){
			printf("Greater than %d\n", guess);

			lower_bound = guess;

			int half = (upper_bound - guess) / 2;
			guess = guess + half;
		} else if(target < guess){
			printf("Less than %d\n", guess);
			
			upper_bound = guess;

			int half = (guess - lower_bound) / 2;
			guess = guess - half;
		}
		// For debug help.
		sleep(1);
	}
	printf("Target is: %d\n", guess);
}

/* To better understand how a binary search algorithm works, lets move through
 * the above code step by step until we get an answer.
 *
 * For example, lets say the supplied target value is 63. So within the while
 * loop the first if statement is triggered (63 is greater than 50) and the new
 * lower_bound is set to 50. This makes our new potential guess range between
 * 50 and 100. 
 *
 * To get the mid point between 50 and 100 we first subtract 50 from 100 to get
 * 50. We then divide 50 in half to get 25 before finally adding that back to
 * 50 to get our new guess value, 75 (the value midway between 50 and 100).
 * Which is then re-run through the loop once again. 
 * 
 * On the next run through our else if statement is triggered because our new
 * guess, 75 is larger than the target value, 63. So the new upper_bound is set
 * to our guess 75, making the new potential guess range between 50 and 75.
 * Finally, the mid point between 50 and 75 is found and assigned to the new
 * guess value.
 *
 * 75 - ((75 - 50) / 2) = 63
 *
 * The new guess value, 63 is then checked against the while loop's
 * conditional. It breaks the conditional because the guess is equal to the
 * target value. So the program prints the final guess value and finishes.
 */

