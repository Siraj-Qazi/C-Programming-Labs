#include <stdio.h>

void order(int *pA, int *pB, int *pC);

int main(void) {
    printf("Enter any three integers: ");
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);

    order(&num1, &num2, &num3);

    printf("From smallest to largest: %d %d %d\n", num1, num2, num3);

    return 0;
}

// Do not change anything above this line
//
// Order the three integers from smallest to largest
void order(int *pA, int *pB, int *pC) {
    // add your code here, do not change anything else
    // No [] allowed in this function
    if (*pA > *pC) {
        int temp = *pA;
        *pA = *pC;
        *pC = temp;
    }

    if (*pA > *pB) {
        int temp = *pA;
        *pA = *pB;
        *pB = temp;
    }
    if (*pB > *pC) {
        int temp = *pB;
        *pB = *pC;
        *pC = temp;
    }
}
