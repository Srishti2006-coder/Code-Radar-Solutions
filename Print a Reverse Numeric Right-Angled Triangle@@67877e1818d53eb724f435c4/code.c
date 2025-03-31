#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i,j;
    for (i=1; i<=n; i++){
        int a;
        a=1;
        for (j=n; j>=i; j--){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}