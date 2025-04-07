#include <stdio.h>

int main() {
    char str[1000];
    int isBinary = 1;

    // Read entire line (to include spaces, if any)
    scanf(" %[^\n]", str); // notice the space before % to skip leading whitespace

    for (int i = 0; str[i] != '\0'; i++) {
        // Skip spaces if allowed
        if (str[i] == ' ')
            continue;

        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

