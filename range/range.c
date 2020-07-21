#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double range;
    int array_size, i;
    array_size = argc - 1;
    if (argc < 2)
    {
        printf("This program requires at least one argument\n");
        return -1;
    }
    double array[array_size];
    char** test = NULL;
    for (i = 0; i < array_size; ++i)
    {
        array[i] = strtod(argv[i + 1],test);
    }

    double min = array[0];

    double max = array[0];

    for (i = 0; i < array_size; i++) {

        if (array[i] < min)
            min = array[i];

        if (array[i] > max)
            max = array[i];

    }
    range = max - min;
    printf("The range of these %d values is %.6lf\n",array_size,range);
    return 0;
}
