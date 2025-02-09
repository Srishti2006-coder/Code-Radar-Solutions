#include <stdio.h>

#include <stdio.h>

void printMirrorRightAngledTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }
}



