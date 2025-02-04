#include <stdio.h>

int main() {
    char alphabet;
    scanf("%d", &alphabet);
    if (alphabet>='a' && alphabet<='z' ){
        printf("Lowercase");
    }
    else if (alphabet>='A' && alphabet<='Z'){
        printf("Uppercase");
    }
    return 0;
}