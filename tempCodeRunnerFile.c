// pointers

#include <stdio.h>
int main(){
    int *ptr,n=10;
    ptr=&n;
    printf("%u",ptr);
    printf("\n%d",*ptr);
    return 0;

}