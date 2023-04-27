

#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter thr str1: ");
    gets(str1);
    int i=0;
    while(str1[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    printf("\nnew copied str1 is: %c",str1);
    return 0;

}
