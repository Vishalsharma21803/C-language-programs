#include <stdio.h>
#include <string.h>
int main(){
    char str1[15],str2[15];
    int n;
    printf("\nEnter source string: ");
    gets(str1);
    printf("\nEnter destination string: ");
    gets(str2);
    printf("\nEnter number of characters to copy in destination string: ");
    scanf("%d",&n);
    strncpy(str2,str1,n);
    printf("\nsource string is: %s",str1);
    printf("\ndestination string is: %s",str2);
    return 0;
  
}
