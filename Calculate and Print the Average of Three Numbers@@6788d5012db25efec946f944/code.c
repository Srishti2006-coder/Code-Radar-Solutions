#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%.2f", &a);
    scanf("%.2f", &b);
    scanf("%.2f", &c);
    int average = a + b + c / 3;
    printf("%Average: %f", average);
    return 0;
}