#include<time.h>
#include<stdio.h>
int main()
{
    const time_t my_time = time(NULL);
    struct tm* local_time = localtime(&my_time);
    printf("Local time day of the month : %d\n\n",local_time->tm_mday);

    struct tm *utc_time = gmtime(&my_time);
    printf("UTC day of the year: %d\n\n", utc_time->tm_yday);
    
    char * str_time = ctime(&my_time);
    printf("C String time : %s\n\n", str_time);
    
    char my_format_time[50];
    strftime(my_format_time,50,"%b, %d",local_time);
    printf("Mmm, dd: %s\n", my_format_time);
    
    clock_t start, end;
    start = clock();
    for(int i=0; i< 88888888;i++){}

    end= clock();
    printf("Total time taken for loop to run: %f\n", (double)(end-start)/CLOCKS_PER_SEC);

}