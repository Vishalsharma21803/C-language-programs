// strlen()   --- to finf length of the string 
// terminating null chaarcter is not including in the counting

#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("the length of the string is: %d",strlen(str));
    return 0;

}

//________________________________________________________

//  strrev  --- to reverse the string

#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("the reversed string is: %s",strrev(str));
    return 0;
}

//__________________________________________________________

