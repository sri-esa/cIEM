//write a program to check if a word is present or not in a user input sentence
#include <stdio.h>

int main() {
    char s[200], w[50];
    int sl = 0, wl = 0, f = 0;
    printf("Enter a Sentence: ");
    scanf("%[^\n]", s);

    printf("Enter a word to Search: ");
    scanf("%s", w);

    while (s[sl] != '\0') {
        sl++;
    }

    while (w[wl] != '\0') {
        wl++;
    }

    for (int i = 0; i <= sl - wl; i++) {
        int j;
        for (j = 0; j < wl; j++) {
            if (s[i + j] != w[j]) {
                break;
            }
        }
        if (j == wl) {
            f = 1;
            break;
        }
    }
    printf("The word '%s' is %s in the sentence",w,f?"":"not");
    // if (f == 1) {
    //     printf("Word found in sentence\n");
    // } else {
    //     printf("Word not found in sentence\n");
    // }

    return 0;
}