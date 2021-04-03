#include <stdio.h>

int main()
{
    float a, b;
    char operation;

    printf("Enter First Number:-\n");
    scanf(" %f", &a);

    printf("Choose Operation:-\n");
    scanf(" %c", &operation);

    printf("Enter Second Number:-\n");
    scanf(" %f", &b);

    switch (operation)
    {
    case '+':
        printf("Addition is %f", a + b);
        break;

    case '-':
        printf("Subtraction is %f", a - b);
        break;

    case '*':
        printf("Product is %f", a * b);
        break;

    case '/':
        printf("Division is %f", a / b);
        break;

    default:
        printf("invalid !");
        break;
    }

    return 0;
}