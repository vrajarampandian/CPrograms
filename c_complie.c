#include<stdio.h>
/\
*
*/ # /*
*/ defi\
ne NU\
M 5\
25

#define MACRO 24
#define LINUX_BUILD 0
//#pragma GCC poison printf
#define SQU(x) (x * x)
#define CONCAT(X,Y) X##Y

//Stringizing macros
#define EXT_STR(s) STR(s)
#define STR(s) #s
#define SOURCE 7

int main() ??<

    //Stringizing
    printf("STR(SOUCRE = %s EXT_sTR(source) = %s\n", STR(SOURCE), EXT_STR(SOURCE));
    int ab = 5;
    printf("ab = %d\n", CONCAT(a, b));
    printf("SQU %d\n", SQU(10));
    printf("C compilation process test %d\n", NUM);
    //Line splicing \
    printf("Hello ");
    printf("World");
    char str??(??) = "Hello Raja";
    printf("Macro = '%d\n", MACRO);
    char constr[] = "Using " "C Preprocessor\n";
    printf("%s\n", constr);
    #ifndef LINUX_BUILD
        printf("This is Linux build\n");
    #else
        printf("This is Windows Build\n");
    #endif

    printf("Line %d File %s\n", __LINE__, __FILE__);
    #line 77 "c_complhhie.c"
        printf("Line %d File %s\n", __LINE__, __FILE__);

    printf("Pragmas practice\n");

}