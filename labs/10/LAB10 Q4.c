#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseSentence(char *sentence) {
    char *start = sentence;
    char *temp = sentence;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(start, temp - 1);
            start = temp + 1;
        }
        temp++;
    }
    reverseWord(start, temp - 1);
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    reverseSentence(sentence);
    printf("Reversed sentence: %s\n", sentence);

    return 0;
}

