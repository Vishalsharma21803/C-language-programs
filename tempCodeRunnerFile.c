#include <stdio.h>
int main(){
    int var1=60,var2=70;
    int *constant ptr=&var1;
    printf("\n%d",*ptr);
    ptr=&var2;  // invalid errot will rise
    printf("\n%d",*ptr);
    return 0;
}