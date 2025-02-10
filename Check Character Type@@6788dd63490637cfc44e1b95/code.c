#include <stdio.h>

int main(){
    char n;
    scanf("%c", &n);
    if (n>='A' && n<='Z' || n>='a' && n<='z'){
        if (n=='a' || n=='e' || n=='o'|| n=='u' ||n=='i'){
            printf("Vowel");
    }
        else if(n=='A' || n=='E'|| n=='O'||n=='I'|| n=='U'){
            printf("Vowel");
    }
        else {
            printf("Consonant");
        }
    }
    else if(n>='0' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
   return 0;
}