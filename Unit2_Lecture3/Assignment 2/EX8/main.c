#include <stdio.h>

int main() {
    char operation;
    float number1, number2;

    printf("Enter operator either + or - or * or /:");
    scanf("%c", &operation);
    printf("Enter two operands:");
    scanf("%f %f",&number1, &number2);

    switch(operation)
    {
        case '+':
            printf("%f + %f = %f",number1, number2, number1 + number2);
            break;

        case '-':
            printf("%f - %f = %f",number1, number2, number1 - number2);
            break;

        case '*':
            printf("%f * %f = %f",number1, number2, number1 * number2);
            break;

        case '/':
            printf("%f / %f = %f",number1, number2, number1 / number2);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
