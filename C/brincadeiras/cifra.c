#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt (char *);

int main () {
    char * phrase = malloc (100);
    fgets (phrase, 100, stdin);
    phrase[strcspn (phrase, "\n")] = '\0';
    encrypt (phrase);
}

int isVowel (char character) {
    return (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
}

char closestVowel (char character) {
    char * current_location = strchr ("abcdefghijklmnopqrstuvwxyz\0", character);
    char * closestLeftVowel = current_location - 1;
    char * closestRightVowel = current_location + 1;

    int distance_1 = 0;
    while (*closestLeftVowel > 'a') {
        distance_1++;
        if (isVowel (*closestLeftVowel))
            break;
        closestLeftVowel--;
    }

    int distance_2 = 0;
    int finishedAlphabet = 0;
    while (*closestRightVowel <= 'z') {
        distance_2++;
        if (*closestRightVowel == 'z') {
            finishedAlphabet = 1;
            break;
        }

        if (isVowel (*closestRightVowel))
            break;
        closestRightVowel++;
    }

    if (!finishedAlphabet)
        return (distance_1 <= distance_2) ? *closestLeftVowel : *closestRightVowel; 
    return (distance_1 <= distance_2) ? *closestLeftVowel : 'u'; 
}

char nextConsonant (char character) {
    while (++character < 'z') {
        if (!isVowel (character))
            return character;
    }
    return 'z';
}

void encrypt (char * phrase) {
    char * current_char = phrase;

    while (*current_char) {
        putchar (*current_char);
        if (!isVowel (*current_char)) {
            putchar (closestVowel (*current_char));            
            putchar (nextConsonant (*current_char));
        }
        current_char++;
    }
    putchar ('\n');
}