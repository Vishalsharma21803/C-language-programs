#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string in highercase: ");
    gets(str);
    printf("the string in lowercase is: %s",strlwr(str));
    return 0;

}