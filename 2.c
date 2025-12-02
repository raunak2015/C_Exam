// simple calculator program
#include <stdio.h>
int main()
{
    float num1, num2;
    char sign;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);
    printf("select : (+, -, *, /) : ");
    scanf(" %c", &sign);
    switch (sign)
    {
    case '+':
        printf("Result: %.2f\n", num1 + num2);
        break;
    case '-':
        printf("Result: %.2f\n", num1 - num2);
        break;
    case '*':
        printf("Result: %.2f\n", num1 * num2);
        break;
    case '/':
        printf("Result: %.2f\n", num1 / num2);
        break;
    default:
        printf("Invalid operator!\n");
    }
    return 0;
}