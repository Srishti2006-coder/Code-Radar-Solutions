#include <stdio.h>

int main() {
    char alphabet;
    scanf("%c", &alphabet);
    if (alphabet>='a' && alphabet<='z' ){
        printf("Lowercase");
    }
    else if (alphabet>='A' && alphabet<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}