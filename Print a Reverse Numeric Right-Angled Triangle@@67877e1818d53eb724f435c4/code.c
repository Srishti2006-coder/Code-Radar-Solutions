#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i,j;
    for (i=n; i>=1; i--){
        int a;
        a=1;
        for (j-1; j<=i; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}