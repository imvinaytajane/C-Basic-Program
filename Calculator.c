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
        printf("Answer is %f", a + b);
        break;

    case '-':
        printf("Answer is %f", a - b);
        break;

    case '*':
        printf("Answewr is %f", a * b);
        break;

    case '/':
        printf("Answer is %f", a / b);
        break;

    default:
        printf("invalid !");
        break;
    }

    return 0;
}