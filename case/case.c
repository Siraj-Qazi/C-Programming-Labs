#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100            // Maximum number of words
#define WORDLENGTH 50       // Maximum length of each word

typedef struct caseCount
{
    int upperCase;
    int lowerCase;
} caseCount;

void countCase(char str[], int *pNumUpper, int *pNumLower);

int main() {

    int num_words = 0;
    char words[SIZE][WORDLENGTH];
    caseCount countOfWords[SIZE] = { {0, 0 }};

    while (scanf("%49s", words[num_words]) != EOF)
    {
        countCase(
                words[num_words],
                &countOfWords[num_words].upperCase,
                &countOfWords[num_words].lowerCase
        );

        num_words++;
    }

    for (int i = 0; i < num_words; ++i)
    {
        printf(
                "%s: %d uppercase, %d lowercase",
                words[i],
                countOfWords[i].upperCase,
                countOfWords[i].lowerCase
        );

        if (i < num_words - 1)
            printf("\n");
    }

    return 0;
}

void countCase(char str[], int *pNumUpper, int *pNumLower)
{
    *pNumUpper = 0;
    *pNumLower = 0;

    for (size_t i = 0; i < strlen(str); ++i)
    {
        if (isupper(str[i]))
        {
            (*pNumUpper)++;
        }
        else if (islower(str[i]))
        {
            (*pNumLower)++;
        }
    }
}