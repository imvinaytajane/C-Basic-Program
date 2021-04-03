#include <stdio.h>

int main()
{

    int age;

    printf("Enter Your Age:-\n");
    scanf("%d", &age);

    if (age <= 90 && age >= 18)
    {
        printf("You are in Leagal Age, You Can Drive\n");
    }

    else
    {
        printf("You Are Not in Leagal Age, You Cannot Drive\n");
    }
    return 0;
}