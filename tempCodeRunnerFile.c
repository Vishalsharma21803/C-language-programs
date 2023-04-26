#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    int n;
    printf("\nEnter first string: ");
    gets(str1);
    printf("\nEnter second string: ");
    gets(str2);
    printf("\nEnter the number of letters you want to contaninate from str2 with str1: ");
    scanf("%d",&n);
    strncat(str1,str2,n);  // str1 and str2 ko jod(add) jkat str1 mein overweite kar raha hai
    printf("\nThe concatenation of the two strings is: %s",str1);
    return 0;
}
