// #include <stdio.h>

// int main() {
//     float radius;
//     scanf("%f", &radius);
//     printf("Area: %.2f", 3.14*radius*radius);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    int t=1;
    scanf("%d",&n);
    if(n<=1){
        t=0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                t=0;
            }
        }
    }
    if(t==1){
        printf("prime");
    
    }
    else{
        printf("not prime");
    }
    return 0;
}