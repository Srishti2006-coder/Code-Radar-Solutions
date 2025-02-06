#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    int i,j;
    for (int i = s; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
         {
            printf("%c", '*');
        }
        printf("/n");  
    }
    return 0;
}
