#include <stdio.h>

int main() {
    char ch;
    scanf("%d", &ch);
    if (ch>='a' && ch<='z' ){
        printf("Lowercase");
    }
    else if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Default case");
    }
    return 0;
}