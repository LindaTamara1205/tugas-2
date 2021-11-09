/* Nama file : 201402053_03.c
Menentukan Tahun Kabisat */

#include <stdio.h>

int main () 
{
    int tahun;
    printf ("Masukkan tahun: ");
    scanf ("%d", &tahun);
    
    if (tahun%400 == 0)
    {
        printf ("%d Merupakan Tahun Kabisat\n", tahun);
    }
    else if (tahun%100==0, tahun%400!=0) 
    {
        printf ("%d Merupakan Tahun Kabisat\n", tahun);
    }
    else if (tahun%4==0, tahun%100!=0) 
    {
        printf ("%d Merupakan Tahun Kabisat\n", tahun);
    }
    else 
    {
        printf ("%d Bukan Tahun Kabisat\n", tahun);
    }

    return 0;

}