#include <stdio.h>

int main() {
    int a;
    int b;
    scnaf("%d", &a);
    scanf("%d", &b);
    printf("%d", a&b);
    return 0;
}