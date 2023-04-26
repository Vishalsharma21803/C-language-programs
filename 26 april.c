//  string is a pointer variable

#include <stdio.h>
int main(){
    char carname[20];
    printf("Enter the name of your car: ");
    scanf("%s",carname);
    printf("\nName of your car is %s",carname);
    
}

//__________________________________________________________

// puts -- printf      gets --- scanf(to input full string)

#include <stdio.h>
void main(){
    char name[100];
    puts("\nEnter your name: ");
    gets(name);  // name mein store karenge input ko

    printf("\nstring is: ");
    puts(name);  // to output constant string

}

//_______________________________________________________________

#include <stdio.h>
int main(){
    char ary[]="discovery channel";
    printf("%s",ary);
    return 0;
}

//_______________________________________________________________


// strcpy function


#include <stdio.h>
#include <string.h>
int main(){
    char ori[20],dup[20];
    char *z;
    printf("\nEnter your name: ");
    gets(ori);
    printf("\nEnter your name again: ");
    gets(dup);
    z=strcpy(ori,dup); // original ki value ko overright kar kar rahe h duplicate ki value se. original ki value duplicate ki value ke same ho jayegi
    printf("\nThe original string now is: %s",ori);
    printf("\nThe duplicate string is: %s",dup);
    printf("\nThe value of z is: %s",z);
    return 0;
}

//_______________________________________________________

