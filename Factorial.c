#include<stdio.h>

int fact2(int n)
{

    int result = 1;
    while (n > 0)
    {
        /* code */
        result = result *  n;
        n = n- 1;
    }
    return result;

}
int fact(int n)
{

    if (n == 0)
        return 1;
    
    return n * fact(n-1);
}
int main()
{
    printf("%d",fact2(5));
    return 0;
}