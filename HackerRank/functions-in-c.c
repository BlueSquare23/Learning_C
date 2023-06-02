#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int answer;

    // Initialize array of input ints.
    int input_ints[] = {a, b, c, d};
    int array_len = sizeof input_ints / sizeof input_ints[0];

    // Loop over said array.
    for (int i = 0; i < array_len; i++) {
        // If its the first int in the array, auto assign it to the answer.
        if (i == 0) {
            answer = input_ints[i];
        }

        // If the given int is larger than the current answer assign new
        // answer.
        if (input_ints[i] > answer) {
            answer = input_ints[i];
        }
    }

    return answer;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
