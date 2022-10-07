#include<stdio.h>
int main() {
    FILE *fileptr = fopen("formatted.txt", "r");
    if (fileptr == NULL) {
        printf("Failed\n");
        return 0;
    }
    char name[8];
    int age;
    char c;
    int result;
    while ((result = fscanf(fileptr, "%7s\t%3d\t%c\n", name, &age, &c)) != EOF) {
        if (result >= 3) {
            printf("%7s\t%3d\t%c\n", name, age, c);
        }
    }
    if (ferror(fileptr) != 0) {
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