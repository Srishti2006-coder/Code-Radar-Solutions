// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[1000], subStr[1000];

    // Read main string
    fgets(mainStr, sizeof(mainStr), stdin);
    // Remove newline if present
    mainStr[strcspn(mainStr, "\n")] = '\0';

    // Read substring
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0';

    // Check if substring exists
    if (strstr(mainStr, subStr) != NULL)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}