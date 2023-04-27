// strlen()   --- to finf length of the string 
// terminating null chaarcter is not including in the counting

#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    fgets(str);
    printf("the length of the function is: %d",strlen(str));
    return 0;

}