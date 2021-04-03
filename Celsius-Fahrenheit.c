#include<stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Input Tempreture in Celsius:-");
    scanf("%f",&celsius);

    fahrenheit=(celsius*9/5)+32;

    printf("Tempreture in Fahrenheit is %f\n",fahrenheit);

    return 0;
}