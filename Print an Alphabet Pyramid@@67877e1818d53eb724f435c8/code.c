// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print characters from 'A' up to the i-th character
        for (int k = 0; k < i; k++) {
            printf("%c ", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}
