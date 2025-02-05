#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b) {
        printf("%d", a);
    }
    else if (a<b){
        printf("%d", b);
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}