// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // Frequency array for all ASCII characters

    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n')  // Ignore newline character from fgets
            freq[ch]++;
    }

    // Display characters and their frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c %d\n", i, freq[i]);
        }
    }

    return 0;
}
