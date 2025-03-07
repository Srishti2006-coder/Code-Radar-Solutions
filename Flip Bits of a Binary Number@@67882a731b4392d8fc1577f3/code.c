#include <stdio.h>

int main() {
    int num;

    // Input the integer number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flipped = ~num;

    // Output the result
    printf("Original number: %d\n", num);
    printf("Flipped number (bitwise NOT): %d\n", flipped);

    return 0;
}
