#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    
    // Input the number of rows
    scanf("%d", &n);

    // Loop to print the inverted triangle
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
