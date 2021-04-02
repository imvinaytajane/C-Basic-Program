#include<stdio.h>

int main()
{
    float r ,h;

    float p;

    p=3.14;

    printf("Input Radius of Circle/Base :-\n");
    scanf( "%f",&r);

    printf( "Area of circle/Base is %f \n:", p*r*r);

    printf("Input Height of Cylender:- \n");
    scanf("%f",&h);

    printf("Volume of cylender is %f \n",p*r*r*h);



    return 0;


}