// Your code here...
#include <stdio.h>
int main() {
    int N, i, sum = 0;
    scanf("%d", &N);

    if (N <= 0) {
        //printf("Please enter a positive integer.\n");
        return 1;
    }
    for (i = 1; i <= N; i++) {
        sum += i;
    }
    printf("%d\n", N, sum);

    return 0;
}
