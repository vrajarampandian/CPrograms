#include<stdio.h>
struct Person {
    char name[7];
    int age;
    char grade; 
};

int main()
{
    FILE *fileptr = fopen("Formatwrite.txt", "w");
    if (fileptr == NULL) {
        printf("Failed\n");
        return 0;
    }
    struct Person ps[3] = {
        { "Raja", 23, 'A'},
        { "Ram", 27, 'B'},
        { "Pandian", 30, 'C'}
    };

    for (int i = 0; i < 3 ; i++) {
        if (fprintf(fileptr, "%s\t%d\t%c\n",
        ps[i].name, ps[i].age, ps[i].grade) < 0) {
            printf("Failed\n");
            return 0;
        }
    }
    if (ferror(fileptr) != 0) {
        printf("ferror Failed \n");
        return 0;
    }
    if (fclose(fileptr) == EOF) {
        printf("Fclose Failed\n");
        return 0;
    }
    printf("Success\n");
    return 0;
}