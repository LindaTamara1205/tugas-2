/* Nama file : ukurdata.c
Menghitung ukuran byte jenis data dasar*/



#include <stdio.h>

int main()
{
    printf("Ukuran jenis data dasar pada GNU C Compiler.\n");
    
    printf("char        : %2d byte.\n", sizeof(char));
    printf("int         : %2d byte.\n", sizeof(int));
    printf("unsigned    : %2d byte.\n", sizeof(unsigned));
    printf("short       : %2d byte.\n", sizeof(short));
    printf("long        : %2d byte.\n", sizeof(long));
    printf("long long   : %2d byte.\n", sizeof(char));
    printf("float       : %2d byte.\n", sizeof(float));
    printf("double      : %2d byte.\n", sizeof(double));
    printf("long double : %2d byte.\n", sizeof(long double));

    return 0;
    
}