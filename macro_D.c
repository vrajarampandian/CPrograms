#include<stdio.h>
int main()
{
    #if defined _WIN32  //Operating systme specific predefined macros
        printf("Windows OS\n");
    #else
        printf("Linux OS\n");
    #endif
    
    #ifdef  __CLION_IDE__  //IDE Specific predefined macros
        printf("CLion IDE\n");
    #endif

    printf("File %s\n", __FILE__);
    printf("Line %d\n", __LINE__);
    printf("Date %s\n", __DATE__);
    printf("Time %s\n", __TIME__);

    printf("GCC version is %d.%d.%d\n",__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__);

}