#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i,j;
    for (i=1; i<=n; i++){
        char ch;
        ch = 'A';
        for(j=1; j<=i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}