#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b) {
        printf("The maximum of two number : %d", a);
    }
    else {
        printf("The maximum of two number : %d", b);
    }
    return 0;
}