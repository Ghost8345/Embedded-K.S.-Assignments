#include <stdio.h>

int main() {
    float number;
    printf("Enter a number:");
    scanf("%f", &number);
    char *sign;
    if (number == 0){
        printf("You entered zero");
        return 0;
    }

    if (number > 0){
        sign = "positive";
    }
    else {
        sign = "negative";
    }
    printf("%f is %s", number, sign);
    return 0;
}
