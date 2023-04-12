
#include <stdio.h>
int main(){
    int *ptr,n=10;
    ptr=&n;
    printf("%u",ptr); //(address of pointer is converted into integer then giving output)
    printf("\n%d",*ptr);
    return 0;

}
