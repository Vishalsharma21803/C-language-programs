#include <stdio.h>
int main(){
    int *ptr;  // wild pointer
    int a=10;
    printf("%u", ptr);  // gives garbage value address
    printf("\n%d",*ptr);  // gives gaarbage value stored in the garbage address
    ptr=&a;
    printf("\n%d",*ptr);  // now ptr is not a wild pointer
    return 0;
}
