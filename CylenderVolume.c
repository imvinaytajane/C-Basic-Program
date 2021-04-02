#include<stdio.h>

int main()
{
    float r ,h;

    float p;

    p=3.14;

    printf("Input Radius of Circle/Base :-");
    scanf( "%f",&r);

    printf( "Area of circle/Base is %f :", p*r*r);

    printf("Input Height of Cylender:-");
    scanf("%f",&h);

    printf("Volume of cylender is %f",p*r*r*h);



    return 0;


}