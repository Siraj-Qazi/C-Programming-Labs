#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convert(char *line, char *target_case);

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("This program requires one argument, either lower or upper\n");
        return 1;
    }

    if (strcmp(*(argv + 1), "lower") != 0 && strcmp(*(argv + 1), "upper") != 0) {
        printf("The argument has to be either lower or upper\n");
        return 2;
    }

    printf("Enter lines, or EOF to end\n");
    while (1) {
        char *line = malloc(150);
        fgets(line, 150, stdin);
        if (feof(stdin)) break;
        convert(line, *(argv + 1));
        printf("%s", line);
    }

    return 0;
}

// Do not change anything above this line
//
// target_case is either "lower" or "upper".
// Convert all the letters in the line to either lowercases
// or uppercase, depending on target_case.
void convert(char *line, char *target_case) {
    // add your code here
    // No [] allowed in this function
    int mode = strcmp(target_case, "lower");
    if (mode == 0) {
        for (int i = 0; i < strlen(line); ++i) {
            *(line + i) = (char) tolower(*(line + i));
        }
    }
    else {
        for (int i = 0; i < strlen(line); ++i) {
            *(line + i) = (char) toupper(*(line + i));
        }
}

}
