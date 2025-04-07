// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // To keep track of printed pairs
    int printed[1000] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i] < arr[j] ? arr[i] : arr[j];
                int b = arr[i] > arr[j] ? arr[i] : arr[j];
                if (!printed[a * 1000 + b]) {
                    printf("%d %d\n", a, b);
                    printed[a * 1000*
