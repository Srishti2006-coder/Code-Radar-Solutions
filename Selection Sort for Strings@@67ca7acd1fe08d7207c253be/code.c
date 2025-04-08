#include <stdio.h>
#include <string.h>

// Implement missing functions here
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

// Keep the original main() provided by the platform
int main() {
    int n;
    scanf("%d", &n);
    char arr[n][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

