/* File copy program in C*/
#include<stdio.h>
int main()
{
    FILE *fileptr1 = fopen("content.txt","r");
    if(fileptr1 == NULL) {
        printf("Failed to load\n");
        return 0;
    }
    FILE *fileptr2 = fopen("cp_content.txt","w");
    if(fileptr2 == NULL) {
        printf("Failed \n");
        return 0;
    }
    char c;
    while (1)
    {
        /* code */
        c = fgetc(fileptr1);
        if(c == EOF)
            break;
        else
            fputc(c,fileptr2);
    }
    fclose(fileptr1);
    fclose(fileptr2);
    printf("Success\n");
    return 0;
}