#include <stdio.h>

int main(){
    char n;
    scanf("%d", &n);
    if (n>='A' && n<='Z' || n>='a' && n<='z'){
    if (type=='a' || type=='e' || type=='o'|| type=='u' ||type=='i'){
        printf("Vowel");
    }
    else if(type=='A' || type=='E'|| type=='O'||type=='I'|| type=='U'){
        printf("Consonant");
    }}
    else if(n>='0' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special  Character");
    }
   return 0;
}