#include <stdio.h>
#include <ctype.h>

int main() {
    char character;
    printf("Enter an alphabet:");
    scanf("%c", &character);
    char *vowelOrConsonant;
    switch (tolower(character)) {
        case 'a':
        case 'i':
        case 'o':
        case 'e':
        case 'u':
            vowelOrConsonant = "vowel";
            break;
        default:
            vowelOrConsonant = "consonant";
    }
    printf("%c is a %s", character, vowelOrConsonant);
    return 0;
}
