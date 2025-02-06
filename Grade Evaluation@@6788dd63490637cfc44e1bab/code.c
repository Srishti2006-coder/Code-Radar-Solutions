#include <stdio.h>

int main() {
    char type;
    scanf("%ch", &type);
    if (type=='A'){
        printf("Excellent");
    }
    else if (type=='B') {
        printf("Good");
    }
    else if (type=='C') {
        printf("Average");
    }
    else if (type=="D") {
        printf("Below Average");
    }
    else if (type=="F") {
        printf("Fail");
    }
    else {
        printf("Invalid grade");
    }
    return 0;
}




