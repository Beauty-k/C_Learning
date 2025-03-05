#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    const char *str = "TheQuickBrownFoxJumpedOverTheLazyDog";
    int counts[26] = { 0 }; // Initialize an array for letter counts
    int i;
    size_t len = strlen(str);

    for (i = 0; i < len; i++) {
        char c = str[i];
        if (!isalpha(c)) continue; // Skip non-letter characters
        counts[(int)(tolower(c) - 'a')]++;
       // printf("%d\n",counts[(int)(tolower(c) - 'a')]);
        printf("%d\n",c - 'a');

    }

    // for (i = 0; i < 26; i++) {
    //     printf("'%c' has %2d occurrences.\n", i + 'a', counts[i]);
    // }

    return 0;
}    