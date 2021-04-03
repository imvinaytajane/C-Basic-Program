#include<stdio.h>

int main ()
{
    int principal , rate , time;
    float si;

    printf("Enter Amount :-\n");
    scanf("%d",&principal);

    printf("Enter Rate of Interest:-\n");
    scanf("%d",&rate);

    printf("Enter Time Interval in Year for Interest:-\n");
    scanf("%d" ,&time);

    si=(rate*time*principal)/100;

    printf("Simple Interest Will Be %f\n",si);

    return 0 ;


}