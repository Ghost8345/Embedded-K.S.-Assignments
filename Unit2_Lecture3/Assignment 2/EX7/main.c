#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer:");
    scanf("%d", &number);

    if (number < 0){
        printf("Error! Factorial of negative number doesn't exist.");
        return 1;
    }

    unsigned long factorial = 1;
    unsigned int i;
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial = %lu", factorial);

    return 0;
}
