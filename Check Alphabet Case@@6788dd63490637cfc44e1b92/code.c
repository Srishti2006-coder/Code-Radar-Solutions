#include <stdio.h>

int main() {
    char alphabet;
    scanf("%ch", &alphabet);
    if (alphabet>='a' && alphabet<='z' ){
        printf("Lowercase");
    }
    else if (alphabet>='A' && alphabet<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Default case")
    }
    return 0;
}