#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    printf("Enter thr str1: ");
    gets(str1);
    int i=0,temp=0;
    while(str1[i]!='\0'){
        temp=temp+1;
        i++;
    }
    printf("\nlength of str1 is: %d",temp);
    return 0;

}
