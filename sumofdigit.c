#include<stdio.h>
int main()
{
    int n;
    int sum =0;
    printf("Enter the number");
    scanf("%d",&n);

    while (n > 0)
    {
        /* code */
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits %d", sum);
    
    return 0;
}