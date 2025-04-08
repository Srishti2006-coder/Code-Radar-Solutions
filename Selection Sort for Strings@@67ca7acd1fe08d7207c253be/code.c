// Your code here...
#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIdx]);
            strcpy(arr[minIdx], temp);
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;

    // Read the number of strings
    scanf("%d", &n);
    char arr[n][100];  // Array of strings with max length 100

    // Read each string from input
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Call the selectionSort function
    selectionSort(arr, n);

    // Print the sorted array of strings
    printArray(arr, n);

    return 0;
}
