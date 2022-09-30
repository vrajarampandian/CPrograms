#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>

void demo_vfprint(FILE *file, const char* format, ...) {
    va_list arguments;
    va_start(arguments, format);
    vfprintf(file, format, arguments);
    va_end(arguments);
}

int main()
{
    FILE *test_file = fopen("text.txt", "w+");

    int max_str_len = 50;
    char scan_string_one[max_str_len], scan_string_two[max_str_len];
    int my_fav_number, user_fav_nuber;
    char format_str[max_str_len];

    fprintf(test_file, "Favorite number: %d\n", 77);
    rewind(test_file);
    fscanf(test_file, "%s %s %d", scan_string_one, scan_string_two, &my_fav_number);

    printf("Favorite number from 'fscanf': %d\n", my_fav_number);
    printf("Enter the number: \n");
    scanf("%d", &user_fav_nuber);

    printf("User favorite number that was read using 'scanf': %d \n", user_fav_nuber);

    sprintf(format_str, "Favorite number comparison: %d | %d\n", my_fav_number, user_fav_nuber);

    printf("%s", format_str);
    fclose(test_file);
    freopen("text.txt", "w+", test_file); // erases current content within the file
    fclose(test_file);

    FILE *new_file = fopen("new_file.txt", "w+");

    char str_buffer[2];
    memset(str_buffer, "\0", sizeof(str_buffer));
}