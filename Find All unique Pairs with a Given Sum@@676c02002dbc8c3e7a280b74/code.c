#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // Loop to find unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check if this pair was already printed
                int already_printed = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) ||
                        (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        already_printed = 1;
                        break;
                    }
                }
                if (!already_printed) {
                    int a = arr[i] < arr[j] ? arr[i] : arr[j];
                    int b = arr[i] > arr[j] ? arr[i] : arr[j];
                    printf("%d %d\n", a, b);
                }
            }
        }
    }

    return 0;
}

