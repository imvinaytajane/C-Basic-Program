#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numers:-");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("Sum is %d and Average is %d",sum, sum / 3);
    return 0;
}