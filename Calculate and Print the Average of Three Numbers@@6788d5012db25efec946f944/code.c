#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float average = (a + b + c) / 3;
    printf("Average: %f", average);
    return 0;
}