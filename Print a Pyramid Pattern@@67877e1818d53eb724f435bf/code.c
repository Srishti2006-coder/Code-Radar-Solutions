#include <stdio.h>

int main(){
    int n;
    printf("%d", &n);
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++);
    {
    printf("%c ",'*');
    }
    printf("\n");

}
return 0;
}