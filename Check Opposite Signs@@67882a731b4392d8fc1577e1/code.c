#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%s", &a);
    scanf("%s", &b);
    if(a>0 && b<0 || a<0 && b>0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}