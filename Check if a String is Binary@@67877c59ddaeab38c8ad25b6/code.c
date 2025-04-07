#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    char str[1000];
    int isBinary = 1;

    // Read the entire line of input (including spaces)
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // Skip whitespace characters like space, tab, newline
        if (isspace(str[i]))
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


