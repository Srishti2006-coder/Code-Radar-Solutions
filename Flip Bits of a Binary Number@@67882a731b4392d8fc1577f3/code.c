// Your code here...
#include <stdio.h>

void printBinary(int n) {
    // Iterate through each bit of the number starting from the most significant bit
    for (int i = 31; i >= 0; i--) {
        // Shift the bit to the rightmost position and use bitwise AND with 1
        int bit = (n >> i) & 1;
        // Print the bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;

    // Input the integer number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flipped = ~num;

    printf("Flipped binary representation: ");
    printBinary(flipped);

    return 0;
}
