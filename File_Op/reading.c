#include<stdio.h>
int main() {
    FILE *fileptr = fopen("details.txt", "r");
    if (fileptr == NULL) {
        printf("Failed\n");
        return 0;
    }
    /*char arr[32];
    while (fgets(arr, 32, fileptr) != NULL) {
        printf(arr);
        fflush(stdout);
    }*/
    char character;
    while ((character = fgetc(fileptr)) != EOF) {
        printf("%c", character);
    }
    if (ferror(fileptr) != 0) {
        printf("Failed\n");
        return 0;
    }
    printf("\n");
    if (fclose(fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }
    printf("Success\n");
    return 0;
    
}