// Your code here...
#include <stdio.h>

int setNthBit(int num, int n) {
    // Set the nth bit to 1 using bitwise OR and a left shift
    return num | (1 << n);
}

int main() {
    int num, n;


    scanf("%d", &num);

    // Set the nth bit
    int result = setNthBit(num, n);
    printf("%d %d\n", n, result);

    return 0;
}
