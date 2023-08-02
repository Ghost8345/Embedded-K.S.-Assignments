#include <stdio.h>

int main() {
    int input;
    printf("Enter an integer:");
    scanf("%d", &input);

    int sum = 0;
    int i;
    for (i = 1; i <= input; i++) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
