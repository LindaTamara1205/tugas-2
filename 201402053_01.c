#include <stdio.h>
void swap (int *p,int *q)
{
    
    *p=*p * *q;
    *p=*p / *q;
    *p=*p / *q;
}

int main()
{
    int P,Q;
    printf("Masukkan bilangan: p=");
    scanf("%d" , &P);
    printf("Masukkan bilangan: q=");
    scanf("%d" , &Q);
    swap(&P,&Q);
    printf("Setelah Swap p=%d, q=%d", P ,Q);
    return 0;
}