#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer you want to check:");
    scanf("%d", &number);
    const char *parity = (number%2 == 0) ? "even" : "odd";
    printf("%d is %s", number, parity);
    return 0;
}
