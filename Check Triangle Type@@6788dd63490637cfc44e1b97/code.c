#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d", &a,&b,&c);
    if (a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
    return 0;
}