#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toPigLatin(char w[]) {
    int l = strlen(w);
    if (l == 0) return;

    char vowels[] = "AEIOUaeiou";

    // If the first letter is a vowel, just add "way"
    if (strchr(vowels, w[0])) {
        printf("Pig Latin: %sway\n", w);
        return;
    }

    // Find the first vowel in the word
    int firstVowelIndex = -1;
    for (int i = 0; i < l; i++) {
        if (strchr(vowels, w[i])) {
            firstVowelIndex = i;
            break;
        }
    }

    if (firstVowelIndex == -1) { // No vowels found (rare case)
        printf("Pig Latin: %say\n", w);
        return;
    }

    // Create the Pig Latin word by moving the consonant cluster
    char pigLatin[100];
    strcpy(pigLatin, w + firstVowelIndex); // Copy from first vowel onwards
    strncat(pigLatin, w, firstVowelIndex); // Append the consonants before the vowel
    strcat(pigLatin, "ay"); // Add "ay" at the end

    printf("Pig Latin: %s\n", pigLatin);
}

int main() {
    char word[100];

    printf("Enter the word: ");
    scanf("%s", word);

    toPigLatin(word);

    return 0;
}
