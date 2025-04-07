#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // 2D array to track printed pairs up to 100
    int printed[101][101] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {  // include i==j for pairs like 3 3
            if (arr[i] + arr[j] == target) {
                int a = arr[i] < arr[j] ? arr[i] : arr[j];
                int b = arr[i] > arr[j] ? arr[i] : arr[j];
                if (arr[i] == arr[j]) a = b = arr[i];  // handle same number
                if (!printed[a][b]) {
                    printf("%d %d\n", a, b);
                    printed[a][b] = 1;
                }
            }
        }
    }

    return 0;
}


