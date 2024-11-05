#include<stdio.h>
int main()
{
    printf("calculator\n");
    float num1, num2;
    char operator;

    printf("number 1 = ");
    scanf("%f",&num1);

    printf("Enter an operator : ");
    scanf(" %c", &operator);

    printf("number 2 = ");
    scanf("%f",&num2);

    switch (operator) 
    {
        case '+':
            printf("Result: %f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %f\n", num1 - num2);
            break;
        case '*':
        case 'x':
            printf("Result: %f\n", num1 * num2);
            break;
        case '/':
            printf("Result: %f\n", num1 / num2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}