#include <stdio.h>
int maan(){
    int a,b;
    scanf("%d %d", &a, &b);
    if (a%b==0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}