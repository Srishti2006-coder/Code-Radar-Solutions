#include <stdio.h>

int main() {
    char type;
    scanf("%ch", &type);
    if (type=='R'){
        printf("Stop");
    }
    else if (type=='G'){
        printf("Go");
    }
    else if (type=='Y'){
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
}