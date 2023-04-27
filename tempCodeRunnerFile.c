#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string in lowercase: ");
    gets(str);
    printf("the string in uppercase is: %s",strupr(str));
    return 0;
    
}