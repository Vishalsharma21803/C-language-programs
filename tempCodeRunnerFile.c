#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    int x;
    printf("\nEnter first string: ");
    gets(str1);
    printf("\nEnter second string: ");
    gets(str2);
    x=strcmp(str1,str2);  // comparing the two strings
    if(x==0)
    printf("\nThe two strings are equal");
    else if(x<0)
    printf("\nThe second string is greate than the first");
    else
    printf("\nThe first string is greater than the second");
    return 0;


}