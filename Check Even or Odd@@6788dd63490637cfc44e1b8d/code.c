#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n%2==0){
        printf("Even");
    }
    else if(n%2!=0){
        printf("Odd");
    }
    else {
        printf("No is not valid");
    }
    return 0;
}