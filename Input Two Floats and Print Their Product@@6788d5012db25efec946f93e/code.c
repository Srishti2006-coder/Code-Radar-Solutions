#include <stdio.h>
int main() {
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);
    float product = a * b;
    printf("product: %.2f", product);
    return 0;
}