#include<stdio.h>
int main() {
    FILE *fileptr = fopen("Streampos.txt", "w+");
    if (fileptr == NULL) {
        printf("Failed \n");
        return 0;
    }
    fpos_t pos;
    if (fgetpos(fileptr, &pos) != 0) {
        printf("Failed\n");
        return 0;
    }
    if (fputs("Hello, world!",fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }
    if (fsetpos(fileptr,&pos) != 0) {
        printf("Failed\n");
        return 0;
    }
    /*if (fputs("Test", fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }*/
    printf("Stream position 1 %d\n", ftell(fileptr));
    //ftell - will return the current stream position as a number

    if (fseek(fileptr, 3, SEEK_CUR) != 0) {
        printf("Failed\n");
        return 0;
    }
    printf("Stream position 2 %d\n", ftell(fileptr));
    char re[7];
    if (fgets(re, 11, fileptr) == NULL) {
        printf("Failed \n");
        return 0;
    }
    printf("%s\n", re);
    if (fseek(fileptr, 0, SEEK_CUR) != 0) {
        printf("Failed \n");
        return 0;
    }
    printf("Stream Pos %d\n", ftell(fileptr));
    if (fputs("Hello again", fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }
    printf("Success");
    return 0;
}