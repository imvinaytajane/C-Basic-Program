#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter Number to Find Even or Odd:-\n");
    scanf(" %d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        printf("Your Number is Even");
    }
    else
    {
        printf("Your Number is odd");
    }
}