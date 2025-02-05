#include <stdio.h>

int main(){
    int costprice;
    int selllingprice;
    scanf("%d", &costprice);
    scanf("%d", &sellingprice);
    if (sellingprice > costprice) {
        printf("Profit");
    }
    else if (costprice > sellingprice) {
        printf("Loss");
    }
    else {
        printf("No profit No Loss");
    }
    return 0;
}
