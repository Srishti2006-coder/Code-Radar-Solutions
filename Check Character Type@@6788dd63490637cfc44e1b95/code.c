#include <stdio.h>

int main(){
    char type;
    scanf("%d", &type);
    if(type=='a' || type=='e'|| type='i'|| type='o'|| type='u'){
        printf("Vowel");
    }
   else if (alphabet>'a' && alphabet<'z'){
       printf("Consonant");
   }
   else {
    printf("Not valid");
   }
   return 0;
}