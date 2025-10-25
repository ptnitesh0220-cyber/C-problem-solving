#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i, words = 0;
    int inWord = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || str[i] == '\n' || str[i] == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord)
        words++;

    printf("Number of words: %d\n", words);

    return 0;
}

