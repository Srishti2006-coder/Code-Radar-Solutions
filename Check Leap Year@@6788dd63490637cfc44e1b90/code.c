#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n%4==0 && n%400==0){
        printf("Leap Year");
    }
    else {
        ("Not a Leap Year");
    }
    return 0;
}
