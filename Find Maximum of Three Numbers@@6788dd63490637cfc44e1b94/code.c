#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b) {
        printf("%d", a);
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}