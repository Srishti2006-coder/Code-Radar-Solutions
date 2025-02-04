#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b && b<0){
        printf("Positive");
    }
    else if(a<b && b>0 ){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}