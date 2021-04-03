#include<stdio.h>

int main()
{
    int radius ,height;

    float pi=3.14;

    printf("Input Radius of Circle/Base :-\n");
    scanf( "%d",&radius);

    printf( "Area of circle/Base is %f\n:", pi*radius*radius);

    printf("Input Height of Cylender:-\n");
    scanf("%d",&height);

    printf("Volume of cylender is %f\n",pi*radius*radius*height);



    return 0;


}