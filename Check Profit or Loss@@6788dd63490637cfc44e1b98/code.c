#include <stdio.h>

int main(){
    int costprice;
    int sellingprice;
    scanf("%d", &costprice);
    scanf("%d", &sellingprice);
    if (sellingprice > costprice) {
        printf("Profit");
    }
    else if (costprice > sellingprice) {
        printf("Loss");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}
