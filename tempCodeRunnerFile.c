#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    int n;
    printf("\nEnter first string: ");
    gets(str1);
    printf("\nEnter second string: ");
    gets(str2);
    printf("\nEnter the number of characters you want to compare from str2 with str1: ");
    scanf("%d",&n);
    strncmp(str1,str2,n);  // comparing n characters the two strings
    if(n==0)
    printf("\nThe two strings are equal");
    else if(n<0)
    printf("\nThe second string is greate than the first");
    else
    printf("\nThe first string is greater than the second");
    return 0;
    
}