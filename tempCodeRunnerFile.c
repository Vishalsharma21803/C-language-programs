
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("the reversed string is: ");
    strrev(str);
    printf("%s",str);
    return 0;
}