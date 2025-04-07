#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // To store frequency of each ASCII character

    fgets(str, sizeof(str), stdin);  // Input the string

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n')  // Ignore newline character from fgets
            freq[ch]++;
    }

    // Display frequency in desired format
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}


