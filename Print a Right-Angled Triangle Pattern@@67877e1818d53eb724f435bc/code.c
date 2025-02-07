#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int i,j;
    for(i = 1; i<=n; i++){
        char '*';
    for (j = 1; j<=i; j++)
        {
            printf("%d", '*');
        }
        printf("\n");
    }
    return 0;
}