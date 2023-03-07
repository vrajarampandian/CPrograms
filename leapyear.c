#include<stdio.h>
int main()
{
    int year = 400;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("Leap year");
            }
            else
                printf("Not Leap year");
        }
        else
            printf("Leap year");
    }
    else {
        printf("Not leap year");
    }
    return 0;
}