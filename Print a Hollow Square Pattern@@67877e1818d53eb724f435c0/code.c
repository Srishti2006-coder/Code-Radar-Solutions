// Your code here...
#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int i,j;
    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < n; j++) {  // Loop for columns
            // Print '*' for the first and last row, or first and last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");  // Print space inside the square
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
