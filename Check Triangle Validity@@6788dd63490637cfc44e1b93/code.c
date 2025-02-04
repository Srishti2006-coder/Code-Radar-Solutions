#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if((a+b>c) && (b+c>a) && (c+a>a)){
        printf("Valid");
    }
    else if {
        printf("Invalid");
    }
    return 0;
}