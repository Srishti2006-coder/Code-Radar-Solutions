// Your code here...#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

// To compare substrings during qsort
int cmpfunc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char str[MAX];
    scanf("%s", str);

    int len = strlen(str);
    char *substrings[MAX * MAX];
    int count = 0;
