#include <stdio.h>

int main() {
    char ch;
    scanf("%d", &ch);
    if (ch<='a' && ch>='z' ){
        printf("Uppercase");
    }
    else if (ch<='A' && ch>='Z'){
        printf("Lowecase");
    }
    return 0;
}