// Your code here...
#include <stdio.h>

int main() {
    int N, i, sum = 0;
    scanf("%d", &N);

    // Check if the input is valid
    if (N <= 0) {
       // printf("Please enter a positive integer.\n");
        return 1;
    }
   // printf("The sum of the first %d natural numbers (", N);
    for (i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" + ");
        }
    }
    printf(") is: ");

    // Calculate the sum
    for (i = 1; i <= N; i++) {
        sum += i;
    }

    // Print the result
    printf("%d\n", sum);
    return 0;
}

