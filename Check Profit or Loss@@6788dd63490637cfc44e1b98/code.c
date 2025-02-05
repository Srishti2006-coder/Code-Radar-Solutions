#include <stdio.h>

int main(){
    int cost price;
    int sellling price;
    scanf("%d", &cost price);
    scanf("%d", &selling price);
    if (selling price > cost price) {
        printf("Profit");
    }
    else if (cost price > selling price) {
        printf("Loss");
    }
    else {
        printf("No profit No Loss");
    }
    return 0;
}
