#include <stdio.h>

#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);  // read the value for s
    int i, j;
    
    // Loop to print rows
    for (i = 1; i <= s; i++) {
        // Loop to print columns (stars)
        for (j = s; j >= 1; j--) {
            printf("* ");
        }
        printf("\n");  // Newline after each row
    }
    
    return 0;
}


