/* Print the Fahrenheit to Celious conversion table
    Formaula - ((F-32) * 5/9)
    F = 0, 20,  ... , 300
    created by Rajaram
*/
#include<stdio.h>
int main()
{
    int start = 0;      /* begin of temperature */   
    int end = 200;      /* Maximum temperature */
    int step = 20;      /* step to increase */
    int result;
    while (start <= end) {
        result = ((start- 32) * 5/9);
        printf("%d \t %d\n", start, result);
        start += step;
    }
    
    return 0;
}