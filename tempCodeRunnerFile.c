#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    printf("Enter str1: ");
    gets(str1);
    
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i]=str1[i]+32;
        i++;
        }
    printf("\nstr1: %s", str2);
    return 0;

}