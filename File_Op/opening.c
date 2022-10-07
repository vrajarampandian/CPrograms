#include<stdio.h>
int main()
{
    FILE *fileptr = fopen("content.txt", "a+");
    if (fileptr == NULL) {
        printf("Failed\n");
        return 0;
    }
    if (fclose(fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }
    printf("Success\n");
    return 0;

    
}