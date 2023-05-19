#include <stdio.h>
int main(){
    int *pnum;
    char *pchar;
    float *pfloat;
    long *plong;
    printf("\n Size of the pointer = %d", sizeof(pnum));
    printf("\n Size of the pointer = %d", sizeof(pchar));
    printf("\n Size of the pointer = %d", sizeof(pfloat));
    printf("\n Size of the pointer = %d", sizeof(plong));
    return 0;
}