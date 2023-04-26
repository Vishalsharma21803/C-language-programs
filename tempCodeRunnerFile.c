#include <stdio.h>
#include <string.h>
int main(){
    char ori[20],dup[20];
    char *z;
    printf("\nEnter your name: ");
    gets(ori);
    printf("\nEnter your name again: ");
    gets(dup);
    z=strcpy(ori,dup); // original ki value ko overright kar kar rahe h duplicate ki value se. original ki value duplicate ki value ke same ho jayegi
    printf("\nThe original string now is: %s",ori);
    printf("\nThe duplicate string is: %s",dup);
    printf("\nThe value of z is: %s",z);
    return 0;
}