#include<stdio.h>
#include<string.h>
int main() {
    FILE *fileptr = fopen("test.txt", "w");
    /*w - create a file if it does not already exist
      if does exist, it will discard its contents */
    if (fileptr == NULL) {
        printf("Failed\n");
        return 0;
    }
    /*char arr[] = "Hello raja ram Pandian !";
    if (fputs(arr,fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }*/

    char arr[] = "Hello Raja !";
    size_t s = strlen(arr);
    for (int i = 0; i < s; i++) {
        if(fputc(arr[i],fileptr) == EOF) {
            printf("Failed\n");
            return 0;
        }
    }
    if (fclose(fileptr) == EOF) {
        printf("Failed\n");
        return 0;
    }
    printf("Success\n");
    return 0;
}