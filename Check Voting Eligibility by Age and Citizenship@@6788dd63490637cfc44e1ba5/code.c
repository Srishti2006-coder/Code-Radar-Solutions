#include <stdio.h>

int main(){
    int age;
    int citizen;
    scanf("%d", &age);
    scanf("%d", &citizen);
    if (age>=18 && citizen == 1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}