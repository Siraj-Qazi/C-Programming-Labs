#include <stdio.h>

#define SIZE 50   // Maximum number of digits

int main() {

    int number = 0;
    int index = 0;
    int digits[SIZE] = {0};
    int count = 0;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digits[index] = number % 10;
        number = number / 10;
        index++;
    }
    int array[index];

    for (int i = 0; i < index; ++i) {
        array[index - i - 1] = digits[i];
    }

    count = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < count - 1 && flag != 1; i++)
    {
        for (int j = i + 1; j < count && flag != 1; j++)
        {
            if (array[i] == array[j])
            {
                flag = 1;
            }
        }
    }

    if (flag==1)
    {
        printf("Duplicate digits found");
    } else
    {
        printf("No duplicate digits found");
    }

    /*for (int i = 0; i < index; ++i)
        printf("\t%d", array[i]);*/
    return 0;
}
