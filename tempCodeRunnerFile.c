#include <stdio.h>
#include <string.h>
int main(){
    char str1[6]="vishal";
    char str2[6]="sharma";
    int i=0;
    while(str1[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    printf("\nnew copied str1 is: %c",str1);
    return 0;

}
