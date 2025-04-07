// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int maxLen = 1, currLen = 1;

    for(int i = 1; i < n; i++) {
        // Skip duplicates
        if(arr[i] == arr[i - 1]) {
            continue;
        }
        else if(arr[i] == arr[i - 1] + 1) {
            currLen++;
        } else {
            if(currLen > maxLen)
                maxLen = currLen;
            currLen = 1;
        }
    }

    // Final check
    if(currLen > maxLen)
        maxLen = currLen;

    printf("%d\n", maxLen);
    return 0;
}
