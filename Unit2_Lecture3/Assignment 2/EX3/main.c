#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%f %f %f", &num1, &num2, &num3);
    num1 = (num1 > num2) ? num1 : num2;
    num1 = (num1 > num3) ? num1 : num3;
    printf("Largest number = %f", num1);
    return 0;
}
