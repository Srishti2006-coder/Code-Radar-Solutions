#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int num;

    // Input from user
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
