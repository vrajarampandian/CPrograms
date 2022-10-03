#include<string.h>
#include<stdio.h>
#include<errno.h>

int main()
{
    char str_name = "My C string.";
    char des_str[strlen(str_name)+1];
    strcpy(des_str,str_name);

    char user_name[] = "Raja ram";
    char first_name[5];

    memset(first_name, '\0', strlen(user_name)+1);
    strncpy(first_name, user_name,4);

    char name[10] = "Raja";
    char last_name[] = "Pandian";
    strcat(name,last_name);
}