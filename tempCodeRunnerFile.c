#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    printf("\nEnter first string: ");
    gets(str1);
    printf("\nEnter second string: ");
    gets(str2);
    srecat(str1,str2);
    printf("\nThe concatenation of the two strings is: %s",str1);
    return 0;
}
