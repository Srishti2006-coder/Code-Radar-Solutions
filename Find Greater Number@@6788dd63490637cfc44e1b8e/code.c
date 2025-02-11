#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        printf("greater integer");
    }
    else if(a<b){
        printf("not greater integer");
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}
