// Your code here...
#include <stdio.h>

int main() {
    int N, i, sum = 0;

    // Ask the user for input
    //printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Check if the input is valid
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum using a loop
    for (i = 1; i <= N; i++) {
        sum += i;
    }

    // Output the result
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
