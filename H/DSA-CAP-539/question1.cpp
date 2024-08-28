// take the input as a string and print the first non repeated character and prit it out.
#include <stdio.h>
#include <string.h>

void findFirstNonRepeatedChar(char str[]) {
    int charCount[256] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        charCount[str[i]]++;
    }

    for (int i = 0; i < length; i++) {
        if (charCount[str[i]] == 1) {
            printf("First non-repeated character: %c\n", str[i]);
            return;
        }
    }

    printf("No non-repeated characters found.\n");
}

//now make a same function to find out the occurrence of all the character in the taken string.

void findCharOccurrences(char str[]) {
    int charCount[256] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        charCount[str[i]]++;
    }

    printf("Character occurrences:\n");
    for (int i = 0; i < length; i++) {
        if (charCount[str[i]] > 0) {
            printf("%c: %d\n", str[i], charCount[str[i]]);
        }
    }
}

//main function where we take the input as a string and print the first non repeated character and prit it out.

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    findFirstNonRepeatedChar(str);
    findCharOccurrences(str);

    return 0;
}
