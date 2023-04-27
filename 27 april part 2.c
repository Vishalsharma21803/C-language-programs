

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    printf("Enter thr str1: ");
    gets(str1);
    int i = 0, temp = 0;
    while (str1[i] != '\0')
    {
        temp = temp + 1;
        i++;
    }
    printf("\nlength of str1 is: %d", temp);
    return 0;
}

//________________________________________________


// CONVERTING UPPERCASE TO LOWERCASE WITHOUT USING ANY INBUILT FUNCTION
#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    printf("Enter str1: ");
    gets(str1);
    
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i]=str1[i]+32;
        i++;
        }
    printf("\nconverted lowercase string is: %s", str2);
    return 0;

}

//___________________________________________________

// lowercase to uppercase conversion without using any inbuild function

#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    printf("Enter str1: ");
    gets(str1);
    
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i]=str1[i]-32;
        i++;
        }
    printf("\nlowercase to uppercase conversion is: %s", str2);
    return 0;

}

//________________________________________________________
