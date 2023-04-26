#include <stdio.h>
int main(){
    int *ptr;
    {
        int var=23;
        ptr=&var;
        printf("\n%d",*ptr); // 23 is printed
        printf("\n%u",ptr); // address of var is printed

    }
    printf("\n%u",ptr); // same address is printed, even var is destroyed, hence ptr is dangling pointer
    return 0;
}
